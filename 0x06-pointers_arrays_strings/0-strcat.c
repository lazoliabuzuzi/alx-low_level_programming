#include "main.h"

/**
 * _strcat - concatenates two strings, the string pointed to by
 * @src, including the x null byte, to the end of the string
 * pointed by @dest.
 * @dest: a pointer to the string to be concatenated upon.
 * @src: the source string to be appended to @dest.
 *
 * Return: a pointer to the destination string @dest.
 */

char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}
