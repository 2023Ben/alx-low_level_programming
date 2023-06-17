#include <stdio.h>

/**
* main - A program that does all alphabet
* Return:0 success
*/

int main(void)
{
char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar(ch[i]);
putchar('\n');
}
return (0);
}
