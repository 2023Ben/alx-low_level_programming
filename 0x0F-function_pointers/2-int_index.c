#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - A function that searches for an integer.
* @array: a pointer
* @size: a size variable
* @cmp: a pointer function
* Return: (-1)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int y;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (y = 0; y < size; y++)
{
if (cmp(array[y]))
return (y);
}
return (-1);
}
