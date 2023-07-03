#include "main.h"

/**
*_memcpy - Entry point
*@src:input
*@n:char
*@dest:input
*Return:(dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int z = 0;
while (z < n)
{
dest[z] = src[z];
z++;
}
return (dest);
}
