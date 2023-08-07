#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be read and printed
 * @letters: the of the file
 *
 * Return: length of char printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, rfd;
	char *b;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	b = malloc(sizeof(*b) * letters + 1);

	if (!b)
	{
		free(b);
		b = NULL;
		return (0);
	}
	rfd = read(fd, b, letters);

	if (rfd < 0)
	{
		free(b);
		b = NULL;
		return (0);
	}
	b[letters + 1] = '\0';
	close(fd);
	n = write(STDOUT_FILENO, b, rfd);

	if (n < 0)
	{
		free(b);
		b = NULL;
		return (0);
	}

	free(b);
	b = NULL;
	return (n);
}
