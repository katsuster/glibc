#include <libm-alias-double.h>
#define __fabs __fabs_generic
#undef libm_alias_double
#define libm_alias_double(a, b)
#include <sysdeps/ieee754/dbl-64/s_fabs.c>
