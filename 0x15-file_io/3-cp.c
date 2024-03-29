#include "main.h"

#define BUFFER_SIZE 1024
/**
 * main - copies content of one file to another
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int from, to, rd, clfr, clto;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
		from = open(argv[1], O_RDONLY);
		if (from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
		while ((rd = read(from, buffer, 1024)) > 0)
		{
			if (write(to, buffer, rd) != rd)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99); }}
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		clfr = close(from);
		if (clfr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
			exit(100); }
		clto = close(to);
		if (clto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
			exit(100); }
		return (0);
}
