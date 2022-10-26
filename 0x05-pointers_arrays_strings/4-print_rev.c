#include "main.h"

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
