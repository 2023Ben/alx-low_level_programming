#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - prints the sum of two digonal
 *
 * @a: int pointer
 * @size: int
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int k, s1 = 0, s2 = 0;

	for (k = 0; k < size; k++)
	{
		s1 += *(a + (size * k + i));
		s2 += *(a + size * k + size - 1 - k);
	}

	printf("%d, %d\n", s1, s2);

}
