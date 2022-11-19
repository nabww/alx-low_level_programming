#include "variadic_functions.h"

/**
 * print_strings - check code
 * @seperator: str
 * @n: no. of str
 * Return: none
 **/

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (seperator)
				printf("%s", seperator);
	}
	printf("\n");
	va_end(valist);
}
