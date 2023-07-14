#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concat 2 string
 *@s1: string 1
 *@s2: string 2
 *@n: integer value
 *Return: pointer points to a new allocated space else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int x, y, i;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (x = 0; s1[x] != '\0'; x++)
;

for (y = 0; s2[y] != '\0'; y++)
;

str = malloc(x + y + 1);


if (n >= y)
n = y;

for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];

for (i = 0; i < n; i++)
str[x + i] = s2[i];

str[x + n] = '\0';

if (str == NULL)
return (NULL);

return (str);
}
