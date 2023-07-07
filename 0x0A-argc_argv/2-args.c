#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point
* @argc: the value of int
* @argv: char of string
* Return: 0(success)
*/

int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
