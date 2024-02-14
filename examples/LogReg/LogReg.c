#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define SAMPLES 100
#define FEATURES 10
#define LEARNING_RATE 128

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

void logRegStep(int32_t INPUT_A[], int32_t INPUT_B[], int32_t OUTPUT_res[], int samples, int features, int learning_rate)
{
    int i, k;
    int32_t sum;
    int32_t weights[features];
    int32_t temp[features];
    int32_t train[samples * features];
    int32_t label[samples];

    memcpy(train, INPUT_A, sizeof(int32_t) * samples * features);
    memcpy(label, INPUT_A + samples * features, sizeof(int32_t) * samples);
    memcpy(weights, INPUT_B, sizeof(int32_t) * features);

    // We perform the forward pass
    for (i = 0; i < samples; i++)
    {
        sum = 0;
        for (k = 0; k < features; k++)
        {
            sum += fixedpt_mul(train[i * features + k], weights[k]);
        }
        if (sum > 128)
        {
            sum = 256;
        }
        else if (sum < -128)
        {
            sum = 0;
        }
        else
        {
            sum = sum + 128;
        }

        {
            sum = 0;
        }
        // We perform the backward pass
        for (k = 0; k < features; k++)
        {
            temp[k] = fixedpt_mul(learning_rate, fixedpt_mul((label[i] - sum), train[i * features + k]));
            weights[k] = weights[k] + temp[k];
        }
    }
    for (k = 0; k < features; k++)
    {
        OUTPUT_res[k] = weights[k];
    }
}

void mpc_main()
{
    int32_t INPUT_A[SAMPLES * FEATURES + SAMPLES];
    int32_t INPUT_B[FEATURES];
    int32_t OUTPUT_res[FEATURES];
    logRegStep(INPUT_A, INPUT_B, OUTPUT_res, SAMPLES, FEATURES, LEARNING_RATE);
}
