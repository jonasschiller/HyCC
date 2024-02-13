#include <stdio.h>
#include <stdint.h>
#include <string.h>

void logRegStep(int32_t INPUT_A[], int32_t INPUT_B[], int32_t OUTPUT_res[], int samples, int features, int learning_rate)
{
    int i, k;
    int32_t sum;
    int32_t weights[features];
    int32_t temp[features];
    int32_t input[samples * features];
    memcpy(input, INPUT_A, sizeof(int32_t) * samples * features);
    memcpy(weights, INPUT_B, sizeof(int32_t) * features);
    for (i = 0; i < samples; i++)
    {
        sum = 0;
        for (k = 0; k < features; k++)
        {
            sum += INPUT_A[i * features + k] * INPUT_B[k];
        }

        if (sum > 0)
        {
            OUTPUT_res[i] = 1;
        }
        else if ()