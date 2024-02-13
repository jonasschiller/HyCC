#include <stdio.h>
#include <string.h>
#include <inttypes.h>

// Parameters taken from the paper
#define SIZE 24 * 24 * 6
typedef int32_t DT;

void relu(DT *val, DT *OUTPUT_res)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (val[i] > 0)
		{
			OUTPUT_res[i] = val[i];
		}
		else
		{
			OUTPUT_res[i] = 0;
		}
	}
}

void mpc_main()
{
	DT INPUT_A[SIZE];
	DT OUTPUT_res[SIZE];
	relu(INPUT_A, OUTPUT_res);
}
