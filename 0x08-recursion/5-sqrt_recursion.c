#include "main.h"

/**
 * evaluate - check code
 * @i: int
 * @n: int
 * Return: squareroot
 * *
 **/

int evaluate(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = evaluate(i + 1, n);
		return (j + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion - find sqrt
 * @n: int
 * Return: sqrt recursion
 **/

int _sqrt_recursion(int n)
{
	int i = 0;

	if (evaluate(i, n) == n && n != 1)
		return (-1);
	else
		return (evaluate(i, n));
}
