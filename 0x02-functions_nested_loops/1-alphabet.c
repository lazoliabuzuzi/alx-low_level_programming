#include "main.h"

/**
 * main - print_alphabet - printthe alphabet in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		_putchar(letter);

	_putchar('\n');
}
