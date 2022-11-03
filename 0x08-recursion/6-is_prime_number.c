#include "main.h"

/**
 * evaluate - check code
 * @i: int
 * @n: int
 * Return: value
 **/

int evaluate(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (evaluate(i + 1, n));
				return (1);
}

/**
 * is_prime_number - prime or not?
 * @n: int
 * Return: boolena
 **/

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (evaluate(i, n));
}
