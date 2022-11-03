#include "main.h"
#include <stdio.h>


/**
 * main: check code
 * return: void
 */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	while  (i < size)
	{
		s1 = s1 + *(a + i *size + i);
		s2 = s2 + *(a + i * size + size - i - 1);
		i++;
	}
	printf("%i, %i\n", s1,s2);
}
