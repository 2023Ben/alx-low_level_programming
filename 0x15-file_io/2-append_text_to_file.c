#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append to
 * @text_content: content to be appended
 *
 * Return: 1 on Success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
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

	f = open(filename, O_RDWR | O_APPEND);

	if (f == -1)
	{
		return (-1);
	}

	write(f, text_content, strlen(text_content));

	close(f);

	return (1);
}
