#include "main.h"

/**
 * checkForPalindrome - checks the string
 * @str: the string that will be checked
 * @len: the length of said string
 * @i: incrementor that starts at 0
 * Return: 1 if a string is a palindrome and 0 if not
 */

int checkForPalindrome(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
	{
		return (checkForPalindrome(str, len - 1, i + 1));
	}
	if (str[i] != str[len])
	{
		return (0);
	}

	return (1);
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string to check the length of
 *
 * Return: an integer that displays the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

/**
 * is_palindrome - checks to see if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if it's a palindrome, 2 if it's not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (checkForPalindrome(s, length, i));
}
