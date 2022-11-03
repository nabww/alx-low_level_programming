#include "main.h"
/**
 * _strlen_recursion - check code
 * @s: pointer
 * Return: strlen_recursion
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /*base condition statemet*/
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
