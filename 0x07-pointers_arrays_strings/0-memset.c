#include "main.h"

/**
* _memset - A program
*@s:pointer
*@n:size of array
*@b:char
* Return:(s)
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int z = 0;

while (z <= (n - 1))
{
s[z] = b;
z++;
}
return (s);
}

