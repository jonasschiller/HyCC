/* Neural Network according to Figure 11 of MiniONN
	Assumes image to be square, assume window size to be odd
*/
#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#define FIXEDPOINT_BITS 32
#define FIXEDPOINT_INTEGER_BITS 24
#define FIXEDPOINT_FRACTION_BITS (FIXEDPOINT_BITS - FIXEDPOINT_INTEGER_BITS)
// Parameters taken from the paper
#define FEATURES 2
#define ELEMENTS 2
#define TEST_SIZE 20
#define FIXED_POINT_SIZE 8
#define TRAINING_ITER 20

typedef int32_t DT;
typedef int32_t fixedpt;
typedef int64_t fixedptd;

typedef struct
{
	DT examples[ELEMENTS * FEATURES];
} InputA;

typedef struct
{
	DT labels[ELEMENTS];
} InputB;

typedef struct
{
	DT weights[FEATURES];
} Output;

Output mpc_main(InputA INPUT_A)
{
	Output OUTPUT_w;

	DT results[ELEMENTS];
	for (int i = 0; i < FEATURES; i++)
	{
		OUTPUT_w.weights[i] = 1;
	}

	for (unsigned it = 0; it < TRAINING_ITER; it++)
	{

		for (unsigned i = 0; i < ELEMENTS; i++)
		{
			DT aRow[FEATURES];
			memcpy(aRow, INPUT_A.examples + i * FEATURES, FEATURES * sizeof(DT));
			DT sum = 0;
			for (unsigned k = 0; k < FEATURES; k++)
			{
				sum += INPUT_A.examples[k] * OUTPUT_w.weights[k];
				//(fixedpt)((fixedptd)(((fixedptd)INPUT_A.examples[k] * (fixedptd)OUTPUT_w.weights[k]) >> (fixedptd)FIXEDPOINT_FRACTION_BITS));
			}
			DT help = 0;
			if (sum >= 128)
			{
				help = sum;
			}
			else if (sum <= (-128))
			{
				help = 0;
			}
			else
			{
				help = sum + 128;
			}
			results[i] = help;
		}
		/*
		DT delta_weights[FEATURES];
		for (int i = 0; i < FEATURES; i++)
		{
			for (int s = 0; s < ELEMENTS; s++)
			{
				DT help = 0;
				help = (fixedpt)((fixedptd)(((fixedptd)(INPUT_B.labels[s] - results[s]) * (fixedptd)OUTPUT_w.weights[i]) >> (fixedptd)FIXEDPOINT_FRACTION_BITS));
				delta_weights[i] += (fixedpt)((fixedptd)(((fixedptd)64 * (fixedptd)help) >> (fixedptd)FIXEDPOINT_FRACTION_BITS));
			}
			OUTPUT_w.weights[i] = OUTPUT_w.weights[i] + delta_weights[i];
		}*/
	}
	return OUTPUT_w;
}