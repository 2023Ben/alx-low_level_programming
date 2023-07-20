#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *prt;
	unsigned int x;
	va_list str;

	if (*separator == 0 || separator == NULL)
		sep = "";
	else
		sep = (char *) separator;
	va_start(str, n);

	if (n > 0)
		printf("%s",  va_arg(str, char *));
	for (x = 1; x < n; x++)
	{
		prt = va_arg(str, char *);
		if (prt == NULL)
			prt = "(nil)";
		printf("%s%s", sep, prt);
	}
	printf("\n");
	va_end(str);
}
