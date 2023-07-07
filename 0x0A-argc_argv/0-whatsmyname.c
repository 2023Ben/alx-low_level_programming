#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: count the number of parameters that goes into the main
 * @argv: pointer of array
 * Return: 1 if successful
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
