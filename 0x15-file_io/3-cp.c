#include "main.h"


/**
 * main - copies the content of a file to another file.
 * @argc: number of parameter passed
 * @argv: array of parameters
 *
 * Return: 0 on Success
 */


int main(int argc, char **argv)
{
	char buf[1024];
	int fd_f, fd_t, x, fr_c, to_c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_f = open(argv[1], O_RDONLY);
	if (fd_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	for (; (x = read(fd_f, buf, 1024)) > 0; )
	{
		if (fd_t < 0 || write(fd_t, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_f);
			exit(99);
		}
	}
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fr_c = close(fd_f);
	to_c = close(fd_t);
	if (fr_c < 0 || to_c < 0)
	{
		if (fr_c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_f);
		if (to_c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_t);
		exit(100);
	}
	return (0);
}
