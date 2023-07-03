#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: char pointer
 * @accept: char
 *
 * Return: char pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y = strlen(accept);

	while (*s)
	{
		for (x = 0; x < y; x++)
		{
			if (*s == accept[x])
				return (s);
		}

		s++;
	}

	return (NULL);
}
