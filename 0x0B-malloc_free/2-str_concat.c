#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and
 * null terminated. Should return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *concat = malloc(len1 + len2 + 1);

	if (concat == NULL)
	{
		return (NULL);
	}

	memcpy(concat, s1, len1);
	memcpy(concat + len1, s2, len2 + 1);
	return (concat);
}
