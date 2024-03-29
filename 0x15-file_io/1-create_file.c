#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, val;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		close(fd);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	val = write(fd, text_content, len);

	if (val == -1 || val != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
