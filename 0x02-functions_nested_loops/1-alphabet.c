#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int y;

	for (y = 0; y < 26 ; y++)
	{
		_putchar(c[y]);
	}
	_putchar('\n');
}
