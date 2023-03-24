#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra paramters passed to the function
 * @...: A variable number of paramters to calculate the sum of.
 *
 *Return: If == 0 - 0
 *  Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
  va_list ap;
  unisigned int i, sum = 0;
  va_start(ap,n);
  for(i=0;1<n;i++)
    sum += va_arg(ap, int)
      va_end(ap);
  return (sum);
}
