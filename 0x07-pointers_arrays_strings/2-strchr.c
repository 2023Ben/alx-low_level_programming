#include "main.h"
#include <stddef.h>

/**
*_strchr - Program that search for chars
*@s:input
*@c:input characters
*Return:(Null)
**/
char *_strchr(char *s, char c)
{
while (*s != c)
{
if (*s == '\0')
{
return (NULL);
}
s++;
}

return (s);
}

