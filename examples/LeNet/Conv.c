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
fixedpt fixedpt_mul(fixedpt a, fixedpt b)
{
	return (fixedptd)((fixedptd)a * (fixedptd)b >> (fixedptd)FIXEDPOINT_FRACTION_BITS);
}

typedef int32_t DT;

void convolution_naive_outputs(DT *INPUT_A, DT *INPUT_B, DT *OUTPUT_layer, unsigned image_width, unsigned window_size, unsigned output_size, unsigned stride, unsigned conv_width)
{
	// unsigned res[conv_width*conv_width*];
	unsigned kernel_size = window_size * window_size;
	for (unsigned o = 0; o < output_size; o++)
	{
		DT kernel[kernel_size];
		DT res[conv_width * conv_width];
		memcpy(kernel, INPUT_B + o * kernel_size, kernel_size * sizeof(DT));
		unsigned window_unrolled = window_size * window_size;
		// Need to assign each input pixel to the convolution matrix
		unsigned x, y, wx, wy;
		for (y = 0; y < conv_width; y++)
		{ // Inner position in the image
			for (x = 0; x < conv_width; x++)
			{
				unsigned oPos = x + y * conv_width;
				DT tmp = 0;
				for (wy = 0; wy < window_size; wy++)
				{ // TODO optimize for depth here
					for (wx = 0; wx < window_size; wx++)
					{
						unsigned convPos = wx + wy * window_size;
						tmp += fixedpt_mul(kernel[convPos], INPUT_A[(y * stride + wy) * image_width + (x * stride + wx)]);
					}
				}
				OUTPUT_layer[oPos] = tmp;
			}
		}
		memcpy(OUTPUT_layer + o * (conv_width * conv_width), res, conv_width * conv_width * sizeof(DT));
	}
}

void mpc_main()
{
	DT INPUT_A[5 * 5];
	DT INPUT_B[2 * 2 * 3];
	DT OUTPUT_res[4 * 4 * 3];
	convolution_naive_outputs(INPUT_A, INPUT_B, OUTPUT_res, 5, 2, 3, 1, 4);
}