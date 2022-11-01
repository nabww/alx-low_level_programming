#include "main.h"


/**
 * main: check code
 * return: char
 *
 */

char *_memset (char *s, char b, unsigned int n)
{
	unsigned int i;

	for ( i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}