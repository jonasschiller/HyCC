#include <stdio.h>
#include <string.h>
#include <inttypes.h>

// Parameters taken from the paper
#define INPUT_SIZE 16 * 4 * 4
#define OUTPUT_SIZE 120

#define FIXEDPOINT_BITS 32
#define FIXEDPOINT_INTEGER_BITS 24
#define FIXEDPOINT_FRACTION_BITS (FIXEDPOINT_BITS - FIXEDPOINT_INTEGER_BITS)

typedef int32_t fixedpt;
typedef int64_t fixedptd;

typedef uint32_t ufixedp_t;
typedef uint64_t ufixedpd_t;

fixedpt fixedpt_mul(fixedpt a, fixedpt b)
{
	return (fixedptd)((fixedptd)a * (fixedptd)b >> (fixedptd)FIXEDPOINT_FRACTION_BITS);
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
		DT sum = 0;
		unsigned j = 0;
		while (j < input_size)
		{

			if (j + 8 < input_size)
			{
				sum += fixedpt_mul(content[j], weights[i * input_size + j]) + fixedpt_mul(content[j + 1], weights[i * input_size + j + 1]) + fixedpt_mul(content[j + 2], weights[i * input_size + j + 2]) + fixedpt_mul(content[j + 3], weights[i * input_size + j + 3]) + fixedpt_mul(content[j + 4], weights[i * input_size + j + 4]) + fixedpt_mul(content[j + 5], weights[i * input_size + j + 5]) + fixedpt_mul(content[j + 6], weights[i * input_size + j + 6]) + fixedpt_mul(content[j + 7], weights[i * input_size + j + 7]);
				j = j + 8;
			}
			else if (j + 4 < input_size)
			{
				sum += fixedpt_mul(content[j], weights[i * input_size + j]) + fixedpt_mul(content[j + 1], weights[i * input_size + j + 1]) + fixedpt_mul(content[j + 2], weights[i * input_size + j + 2]) + fixedpt_mul(content[j + 3], weights[i * input_size + j + 3]);
				j = j + 4;
			}
			else if (j < input_size) // Add this condition to prevent index out of bounds
			{
				sum += fixedpt_mul(content[j], weights[i * input_size + j]);
				j = j + 1;
			}
			else
			{
				break; // Exit the loop if j exceeds input_size
			}
		}
		OUTPUT_res[i] = sum;
	}
}

void mpc_main()
{
	DT INPUT_A[INPUT_SIZE];
	DT INPUT_B[INPUT_SIZE * OUTPUT_SIZE];
	DT OUTPUT_res[OUTPUT_SIZE];
	mmulT_unrolled(INPUT_A, INPUT_B, OUTPUT_res, INPUT_SIZE, OUTPUT_SIZE);
}