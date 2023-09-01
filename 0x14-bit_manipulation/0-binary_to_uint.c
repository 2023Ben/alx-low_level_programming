#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num1 = 0, mult = 1;
int x;

if (!b)
{
return (0);
}

for (x = 0; b[x];)
{
x++;
}

for (x -= 1; x >= 0; x--)
{
if (b[x] != '0' && b[x] != '1')
{
return (0);
}

num1 += (b[x] - '0') * mult;
mult *= 2;
}

return (num1);
}
