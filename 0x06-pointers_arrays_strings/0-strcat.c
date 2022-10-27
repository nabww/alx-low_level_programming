#include "main.h"


/**
 * Main: check code
 * Return: dest
 */

char *strcat(char *dest, char *src)
{
	int i, len;

	len = 0;


	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
