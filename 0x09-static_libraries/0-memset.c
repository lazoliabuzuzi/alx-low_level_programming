#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 * area pointed to by @s with the constant byte @b.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte.
 * @n: The number of bytes to be filled.
 *
 * Return: a pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
