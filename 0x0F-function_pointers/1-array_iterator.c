#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - A function given as a parameter on each element of an array.
* @size: a variable for size
* @array: pointer array
* @action: pointer to a function
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;

if (action == NULL || array == NULL || size <= 0)
return;
for (x = 0; x < size; x++)
{
action(array[x]);
}
}
