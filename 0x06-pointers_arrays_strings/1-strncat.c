#include "main.h"


/**
 *
 * main: check code
 * return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] !=  && i < n)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);

}
