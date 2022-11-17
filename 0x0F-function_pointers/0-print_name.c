#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - check code
 * @name: name to display
 * @f: pointer
 * Return: null
 **/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
