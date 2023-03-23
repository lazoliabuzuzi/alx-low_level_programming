#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * c = char, i = int, f = float, s = char *
 * @format: list of arg types
 * Return: if the string is NULL, print (nil) instead
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	int count = 0;
	va_list args;

	va_start(args, format);

	while (format[count])
	{
		switch (format[count])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
			default:
				break;
		}
		count++;
	}
	va_end(args);
	printf("\n");
}
