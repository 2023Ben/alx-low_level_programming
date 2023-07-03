#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: char pointer
 * @accept: char
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y, z = strlen(accept);

	while (*s && *s != ' ')
	{
		for (y = 0; y < z; y++)
		{
			if (*s == accept[y])
				x += 1;
		}

		s++;
	}

	return (x);
}
