#include "main.h"

/**
 * set_string - a function that sets the
 * value of a pointer to a char
 * @s: pointer to pointer
 * @to: the pointer to change the pointer to
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
