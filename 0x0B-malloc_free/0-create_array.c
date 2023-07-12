#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars, and initializes it with
* a specific char
* @size: size of array
* @c: character to initialize with
*
* Return: Pointer
*/
char *create_array(unsigned int size, char c)
{
unsigned int j;
char *s;

if (size <= 0)
return  0;

s = malloc(sizeof(char) * size);
if (s == 0)
return (0);
for ( j = 0; j <= size; j++)
{
*(s + j) = c;
}
*(s + j) = 0;
return (s);
}
