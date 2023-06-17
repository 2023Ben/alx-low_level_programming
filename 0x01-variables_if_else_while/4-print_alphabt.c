#include <stdio.h>

/**
 * main - A program that run
 * Return:0 success
 */

int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz";

	int i;

	for (i = 0; i < 24; i++)
		putchar(alpha[i]);
	putchar('\n');
	return (0);
}	
