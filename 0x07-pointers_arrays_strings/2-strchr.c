#include "main.h"


/**
 * main: check code
 * return: pointer to char
 *
 */

char *_strchr (char *s, char c)
{
	while (*s != '\0')
	{
		if(*s == c)
		{
		return (s);
		}
		++s;
	}	
	if (*s == c)
	{
		return (s);
	}
	return 0;

}
