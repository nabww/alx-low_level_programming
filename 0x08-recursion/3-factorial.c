#include "main.h"
/*
 * factorial - gives the factorial of an integer
 * @n: pointer
 * Return: factorial result
 */
int factorial(int n)
{
	if (n == 0)/*base cdtn*/
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n -1));/*recursive function cal*/
}
