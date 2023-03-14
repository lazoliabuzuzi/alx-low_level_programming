#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 *
 * @str: The string to copy
 *
 * Return: a pointer to the duplicated string, NULL if insufficient
 * memory or if @str is NULL
 */

char *_strdup(char *str)
{
	int b = 0, i = 1;

	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	while (b < i)
	{
		s[b] = str[b];
		b++;
	}

	s[b] = '\0';
	return (s);
}
