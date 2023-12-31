#include "main.h"


/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content the file
 *
 * Return: 1 on success or -1 or failure
 */

int create_file(const char *filename, char *text_content)
{
	int f;

	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
	{
		return (-1);
	}

	write(f, text_content, strlen(text_content));
	close(f);


	return (1);
}
