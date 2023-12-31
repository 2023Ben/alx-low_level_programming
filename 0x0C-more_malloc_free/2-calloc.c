#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: first parameter
 * @size: second parameter
 *
 * Description: function that allocates memory for an array
 * Return: Always(0) Success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *memory;
unsigned int x;

if (nmemb == 0 || size == 0)
return (NULL);

memory = malloc(nmemb * size);

if (memory == NULL)
return (NULL);

x = 0;
while (x < (nmemb * size))
{
*(memory + x) = 0;
x++;
}
return (memory);
}
