#include "main.h"

/**
* swap_int - A program for swap  the values of two integers.
*@a: to the  first value
*@b: to the second value
*/

void swap_int(int *a, int *b)
{
int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
