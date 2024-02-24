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

fixedpt fixedpt_div(fixedpt a, fixedpt b)
{
    return ((fixedptd)a << FIXEDPOINT_FRACTION_BITS) / b;
}

ufixedp_t fixedpt_add_overflow_free(ufixedp_t a, ufixedp_t b)
{
    ufixedpd_t res = a + b;
    return res;
}

void updateWeights(fixedpt INPUT_A[], fixedpt OUTPUT_res[], int32_t features)
{
    fixedpt sum[features];
    fixedpt train[features * 300];
    sum[0] = 0;
    sum[1] = 0;
    sum[2] = 0;
    sum[3] = 0;
    sum[4] = 0;
    memcpy(train, INPUT_A, sizeof(fixedpt) * features * 300);
    for (int i = 0; i < 300; i++)
    {
        sum[0] = fixedpt_add_overflow_free(sum[0], train[i * features]);
        sum[1] = fixedpt_add_overflow_free(sum[1], train[i * features + 1]);
        sum[2] = fixedpt_add_overflow_free(sum[2], train[i * features + 2]);
        sum[3] = fixedpt_add_overflow_free(sum[3], train[i * features + 3]);
        sum[4] = fixedpt_add_overflow_free(sum[4], train[i * features + 4]);
    }
    OUTPUT_res[0] = fixedpt_div(sum[0], 300 << FIXEDPOINT_FRACTION_BITS);
    OUTPUT_res[1] = fixedpt_div(sum[1], 300 << FIXEDPOINT_FRACTION_BITS);
    OUTPUT_res[2] = fixedpt_div(sum[2], 300 << FIXEDPOINT_FRACTION_BITS);
    OUTPUT_res[3] = fixedpt_div(sum[3], 300 << FIXEDPOINT_FRACTION_BITS);
    OUTPUT_res[4] = fixedpt_div(sum[4], 300 << FIXEDPOINT_FRACTION_BITS);
}
void mpc_main()
{
    fixedpt INPUT_A[FEATURES * 300];
    fixedpt OUTPUT_res[FEATURES];
    updateWeights(INPUT_A, OUTPUT_res, FEATURES);
}
