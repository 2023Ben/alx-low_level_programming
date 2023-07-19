#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int x;
    if (action == NULL || array == NULL || size <= 0)
    return;
    for (x = 0; x < size;x++)
    {
         action(array[x]);
    }
}
