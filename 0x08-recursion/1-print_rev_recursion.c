#include "main.h"

/**
 * _print_rev_recursion - check code
 * @s: pointer
 * Return: null
 */
void _print_rev_recursion(char *s)
{
	if (*s)/*if statement*/
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);/*outputs s*/
	}
}
