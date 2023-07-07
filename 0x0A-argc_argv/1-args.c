#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: int for value
 * @argv: char for value
 * Return: 1(success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		argv[i] = argv[i];
	}
	printf("%d\n", i - 1);
	return (0);
}
