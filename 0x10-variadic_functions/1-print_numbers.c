#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sep;
	va_list ap;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(ap, n);
	if (n > 0)
		printf("%d", va_arg(ap, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(ap, int));
	printf("\n");
	va_end(ap);
}
