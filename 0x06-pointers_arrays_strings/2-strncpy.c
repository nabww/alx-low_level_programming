#include "main.h"

/**
 * Main: check code
 * return: dest
 */

char *strncpy(char *dest, char *src, int n )
{
	int i;
	 i = 0;

	 for (;i < n && src[i] != '\0'; i++)
	 {
		 dest[i] = src[i];
	 }
	 while (i < n)
	 {
		 dest[i] = '\0';
		 i++;
	 }
	 return (dest);
}
