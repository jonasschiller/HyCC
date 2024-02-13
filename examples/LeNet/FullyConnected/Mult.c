#include <stdio.h>
#include <string.h>
#include <inttypes.h>

// Parameters taken from the paper
#define IMAGE_WIDTH 28 // 28
#define WINDOW_WIDTH 5
#define STRIDE 2
#define OUTPUT_CHANNELS 5 // 5

#define IMAGE_CROP 13							   // 13 with padding
#define SIZE_CONVOLUTION (IMAGE_CROP * IMAGE_CROP) // 169

#define FIXEDPOINT_BITS 32
#define FIXEDPOINT_INTEGER_BITS 24
#define FIXEDPOINT_FRACTION_BITS (FIXEDPOINT_BITS - FIXEDPOINT_INTEGER_BITS)

typedef int32_t fixedpt;
typedef int64_t fixedptd;

typedef uint32_t ufixedp_t;
typedef uint64_t ufixedpd_t;

// Decomposed to seperate shifting from remaining code
fixedptd fixedpt_mul_inner(fixedpt a, fixedpt b)
{
	return (fixedptd)a * (fixedptd)b;
}

fixedpt fixedpt_mul(fixedpt a, fixedpt b)
{
	return (fixedptd)(fixedpt_mul_inner(a, b) >> (fixedptd)FIXEDPOINT_FRACTION_BITS);
}

typedef int32_t DT;

void mmulT_unrolled(DT *INPUT_A, DT *INPUT_B, DT *OUTPUT_res, unsigned input_size, unsigned output_size)
{
	DT content[input_size];
	DT weights[output_size * input_size];
	memcpy(content, INPUT_A, input_size * sizeof(DT));
	memcpy(weights, INPUT_B, input_size * output_size * sizeof(DT));
	// Perform the vector-matrix multiplication
	for (unsigned i = 0; i < output_size; i++)
	{
		unsigned j = 0;
		while (j < input_size)
		{
			if (j + 8 <= input_size)
			{
				OUTPUT_res[i] += fixedpt_mul(INPUT_A[j], INPUT_B[i * input_size + j]) + fixedpt_mul(INPUT_A[j + 1], INPUT_B[i * input_size + j + 1]) + fixedpt_mul(INPUT_A[j + 2], INPUT_B[i * input_size + j + 2]) + fixedpt_mul(INPUT_A[j + 3], INPUT_B[i * input_size + j + 3]) + fixedpt_mul(INPUT_A[j + 4], INPUT_B[i * input_size + j + 4]) + fixedpt_mul(INPUT_A[j + 5], INPUT_B[i * input_size + j + 5]) + fixedpt_mul(INPUT_A[j + 6], INPUT_B[i * input_size + j + 6]) + fixedpt_mul(INPUT_A[j + 7], INPUT_B[i * input_size + j + 7]);
				j = j + 8;
			}
			else if (j + 4 <= input_size)
			{
				OUTPUT_res[i] += fixedpt_mul(INPUT_A[j], INPUT_B[i * input_size + j]) + fixedpt_mul(INPUT_A[j + 1], INPUT_B[i * input_size + j + 1]) + fixedpt_mul(INPUT_A[j + 2], INPUT_B[i * input_size + j + 2]) + fixedpt_mul(INPUT_A[j + 3], INPUT_B[i * input_size + j + 3]);
				j = j + 4;
			}
			else
			{
				OUTPUT_res[i] += fixedpt_mul(INPUT_A[j], INPUT_B[i * input_size + j]);
			}
		}
	}
}

void mpc_main()
{
	DT INPUT_A[16 * 4 * 4];
	DT INPUT_B[16 * 4 * 4 * 120];
	DT OUTPUT_res[120];
	mmulT_unrolled(INPUT_A, INPUT_B, OUTPUT_res, 16 * 4 * 4, 120);
}