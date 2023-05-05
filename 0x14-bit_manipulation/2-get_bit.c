#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the bit we're checking
 * @index: the index, starting from 0, of the bit you want to get
 * Return: the value of the bit at the index or -1 if an error
 * occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
