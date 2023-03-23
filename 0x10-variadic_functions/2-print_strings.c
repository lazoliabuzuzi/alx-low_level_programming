#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	const char *current_arg;
	unsigned int i;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		current_arg = va_arg(arg_list, const char*);

		if (current_arg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_arg);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(arg_list);

	printf("\n");
}
