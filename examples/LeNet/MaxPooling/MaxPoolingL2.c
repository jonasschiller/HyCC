#include <stdio.h>
#include <string.h>
#include <inttypes.h>

// Parameters taken from the paper
#define IMAGE_WIDTH 8	   // 8
#define OUTPUT_CHANNELS 16 // 16

typedef int32_t DT;

void max_pooling_outputs(DT *vals, DT *OUTPUT_res, unsigned outputs, unsigned cols, unsigned rows)
{
	for (int o = 0; o < outputs; o++)
	{
		unsigned size = cols * rows;
		DT input_layer[size]; // We copy data, because compiler is unable to slice array efficiently
		for (int i = 0; i < size; i++)
		{
			input_layer[i] = vals[o * size + i];
		}
		unsigned output_size = cols / 2 * rows / 2;
		DT res_layer[output_size];
		unsigned rows_res = rows / 2;
		unsigned cols_res = cols / 2;
		for (unsigned i = 0; i < rows_res; i++)
		{
			for (unsigned j = 0; j < cols_res; j++)
			{
				unsigned x = j * 2;
				unsigned y = i * 2;
				DT max = vals[y * cols + x];
				if (vals[y * cols + x + 1] > max)
				{
					max = vals[y * cols + x + 1];
				}
				if (vals[(y + 1) * cols + x] > max)
				{
					max = vals[(y + 1) * cols + x];
				}
				if (vals[(y + 1) * cols + x + 1] > max)
				{
					max = vals[(y + 1) * cols + x + 1];
				}
				res_layer[i * cols_res + j] = max;
			}
		}
		for (int i = 0; i < output_size; i++)
		{
			OUTPUT_res[o * output_size + i] = res_layer[i];
		}
	}
}

void mpc_main()
{
	DT INPUT_A[8 * 8 * 16];
	DT OUTPUT_res[16 * 4 * 4];
	max_pooling_outputs(INPUT_A, OUTPUT_res, 16, 8, 8);
}