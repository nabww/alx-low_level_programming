#include "main.h"

/**
 *
 * returns string followed by a new line to stdout
 *
 */

void _puts(char str)
{
	int i;
	 
	i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
