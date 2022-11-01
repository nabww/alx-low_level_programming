#include "main.h"


/**
 *
 * main: check code
 * return: unsigned int
 */

unsigned int strspn (char *s, char *accept)
{
	unsigned int counter;
	int i, j;

	int len_long_str = strleng(s);
	int len_accept = strleng(accept);


	for (i = 0; i <len_long_str -1; i++)
	{
		for (j = 0; j < len_accept; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				counter++;
				break;
			}
			if (*(accept + j) == '\0')
			{
				return (counter);
			}
		}
		return counter;
	}
int strleng (char *a)
{
	int i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	i++;
	return (i);
}
}
