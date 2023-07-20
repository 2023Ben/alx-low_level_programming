#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: will separate each string
 * @n: number of variable string
 * Return: Nothing
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	char *y;
	va_list args;

	va_start(args, n);

	while (x < n)
	{
		y = va_arg(args, char *);

		if (y == NULL)
			y = "(nil)";
		printf("%s", y);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
		x++;
	}

	va_end(args);
	printf("\n");
}
