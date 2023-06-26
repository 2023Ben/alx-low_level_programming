#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int x, y, z;

	for (x = 0; s[x] != '\0'; x++)
	{
		;
	}

	y = x - 1;

	for (z = 0; z < y / 2; z++)
	{
		tmp = s[z];
		s[z] = s[x];
		s[x--] = tmp;
	}
}
