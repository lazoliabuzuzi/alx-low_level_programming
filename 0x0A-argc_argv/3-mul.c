#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: argument count
 * @argv: argment vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;
	{
		printf("%d\n", result);
	}

	return (0);

	if (argc == 3)
	{
		printf("Error\n");
		return (1);
	}
}
