#include <stdio.h>

/**
 * main - A program that does all alphabet
 * Return:0 success
 */

int main(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch[i]);
		putchar('\n');
	}
	return (0);
}
