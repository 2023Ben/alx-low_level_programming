#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: first parameter
 * @max: second parameter
 *
 * Description: function that creates an array of integers
 * Return: Always(0) Success
 */
int *array_range(int min, int max)
{
int *array;
int y, array_size;

if (min > max)
return (NULL);

array_size = (max - min) + 1;

array = malloc(sizeof(int) * array_size);

if (array == NULL)
return (NULL);

y = 0;
while (y < array_size)
{
array[y] = min;
min = min + 1;
y++;
}

return (array);
}
