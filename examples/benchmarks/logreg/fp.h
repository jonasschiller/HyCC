#include <inttypes.h>

#define FIXEDPOINT_BITS 32
#define FIXEDPOINT_INTEGER_BITS 24
#define FIXEDPOINT_FRACTION_BITS (FIXEDPOINT_BITS - FIXEDPOINT_INTEGER_BITS)

typedef int32_t fixedpt;
typedef int64_t fixedptd;

// Decomposed to seperate shifting from remaining code
fixedptd fixedpt_mul_inner(fixedpt a, fixedpt b)
{
  return (fixedptd)a * (fixedptd)b;
}

fixedpt fixedpt_mul(fixedpt a, fixedpt b)
{
  return (fixedptd)(fixedpt_mul_inner(a, b) >> (fixedptd)FIXEDPOINT_FRACTION_BITS);
}

fixedpt fixedpt_div(fixedpt a, fixedpt b)
{
  return ((fixedptd)a << FIXEDPOINT_FRACTION_BITS) / b;
}
