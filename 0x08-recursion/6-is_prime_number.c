#include "main.h"

/**
 * findPrimeNumber - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @a: number to check
 * @b: numbers to check
 * Return: a prime number or not
 */

int findPrimeNumber(int a, int b)
{
	if (a <= 1 || a % b == 0)
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	else if (a > b)
	{
		findPrimeNumber(a, b + 1);
	}

	return (1);
}

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: the number to check
 * Return: 0 if the integer is not a prime number and 1 if it is
 */

int is_prime_number(int n)
{
	return (findPrimeNumber(n, 2));
}
