#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define SAMPLES 100
#define FEATURES 5
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

void logRegStep(int32_t INPUT_A[], int32_t INPUT_B[], int32_t OUTPUT_res[], int features, int learning_rate)
{
    int i, k;
    int32_t sum;
    int32_t weights[features];
    int32_t temp[features];
    int32_t train[features];
    int32_t label[1];

    memcpy(train, INPUT_A, sizeof(int32_t) * features);
    memcpy(label, INPUT_A + features, sizeof(int32_t) * 1);
    memcpy(weights, INPUT_B, sizeof(int32_t) * features);

    sum = 0;

    sum += fixedpt_mul(train[0], weights[0]) + fixedpt_mul(train[1], weights[1]) + fixedpt_mul(train[2], weights[2]) + fixedpt_mul(train[3], weights[3]) + fixedpt_mul(train[4], weights[4]); //+ fixedpt_mul(train[5], weights[5]) + fixedpt_mul(train[6], weights[6]) + fixedpt_mul(train[7], weights[7]) + fixedpt_mul(train[8], weights[8]) + fixedpt_mul(train[9], weights[9]);
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
    temp[0] = fixedpt_mul(learning_rate, fixedpt_mul((label[i] - sum), train[0]));
    weights[0] = weights[0] + temp[0];
    temp[1] = fixedpt_mul(learning_rate, fixedpt_mul((label[i] - sum), train[1]));
    weights[1] = weights[1] + temp[1];
    temp[2] = fixedpt_mul(learning_rate, fixedpt_mul((label[i] - sum), train[2]));
    weights[2] = weights[2] + temp[2];
    temp[3] = fixedpt_mul(learning_rate, fixedpt_mul((label[i] - sum), train[3]));
    weights[3] = weights[3] + temp[3];
    temp[4] = fixedpt_mul(learning_rate, fixedpt_mul((label[i] - sum), train[4]));
    weights[4] = weights[4] + temp[4];
    /*
    temp[5] = fixedpt_mul(learning_rate, fixedpt_mul((label[i] - sum), train[i * features + 5]));
    weights[5] = weights[5] + temp[5];
    temp[6] = fixedpt_mul(learning_rate, fixedpt_mul((label[i] - sum), train[i * features + 6]));
    weights[6] = weights[6] + temp[6];
    temp[7] = fixedpt_mul(learning_rate, fixedpt_mul((label[i] - sum), train[i * features + 7]));
    weights[7] = weights[7] + temp[7];
    temp[8] = fixedpt_mul(learning_rate, fixedpt_mul((label[i] - sum), train[i * features + 8]));
    weights[8] = weights[8] + temp[8];
    temp[9] = fixedpt_mul(learning_rate, fixedpt_mul((label[i] - sum), train[i * features + 9]));
    weights[9] = weights[9] + temp[9];*/
    for (k = 0; k < features; k++)
    {
        OUTPUT_res[k] = weights[k];
    }
}

void mpc_main()
{
    int32_t INPUT_A[FEATURES + 1];
    int32_t INPUT_B[FEATURES];
    int32_t OUTPUT_res[FEATURES];
    logRegStep(INPUT_A, INPUT_B, OUTPUT_res, FEATURES, LEARNING_RATE);
}
