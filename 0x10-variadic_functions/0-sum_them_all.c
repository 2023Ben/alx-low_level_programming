#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - A  function that returns the sum of all its parameters.
 * @n: an argument
 * Return: void
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int  mat;
unsigned int i;

if (n == 0)
return (0);

va_start(ap, n);         /* Initialize the argument list. */

mat = 0;
for (i = 0; i < n; i++)
mat += va_arg(ap, const unsigned int);    /* Get the next argument value. */

va_end(ap);                  /* Clean up. */
return (mat);
}
