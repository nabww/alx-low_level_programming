#include "main.h"


/**
 * main: check code
 * return: char pointer
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	 i =  0;
	 while (i < n)
	 {
		 *(dest + i) = *(src + i);
		 i++;
	 }
	return (dest);
}
