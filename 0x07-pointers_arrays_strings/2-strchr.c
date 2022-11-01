#include "main.h"


/**
 * main: check code
 * return: pointer to char
 *
 */

char *_strchr (char *s, char c)
{
	do {
		if (*s == c)
		{
			break;
		}

	}
	while (*s++);
	return (s);
}
