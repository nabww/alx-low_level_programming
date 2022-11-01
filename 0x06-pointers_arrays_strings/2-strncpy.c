#include "main.h"

/**
 * Main: check code
 * return: dest
 */

char *strncpy(char *dest, char *src, int n )
{
	int i;
	 i = 0;

	 for (;i < n && *(src + i))
	 {
		*(dest + i) = *(src + i);
		i++;
	 }
	 while (i < n)
	 {
		 (dest + i) = '\0';
		 i++;
	 }
	 return (dest);
}
