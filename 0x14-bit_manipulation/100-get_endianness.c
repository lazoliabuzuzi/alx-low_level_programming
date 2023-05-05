#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int number = 1;
	char *byte = (char *)&number;

	return ((*byte == 1) ? 1 : 0);
}
