#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
        int **array;
	unsigned int i;
    array = malloc(width * sizeof(int *));
    for(i = 0; i < width; i++)
    {
        array[i] = malloc(height * sizeof(int));
    }
    return array;
}
