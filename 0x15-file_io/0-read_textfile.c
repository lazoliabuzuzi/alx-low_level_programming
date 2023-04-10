#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: the file that will be read
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print,
 * 0 if the file can not be opened or read, 0 if @filename is
 * NULL, 0 if if write fails or does not write the expected
 * amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
		return (0);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	free(buffer);
	close(fd);

	return (bytes_written);
}