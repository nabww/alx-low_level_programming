#include "main.h"
#include <stdio.h>


/**
 * main: check code
 * return: void
 */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	while  (i < (size * size))
	{
		s1 += *(a + );
		i += (size + 1);
	}
	printf("%d", s1);

	while (j < (size * size) - 1)
	{
		s2 += *(a + j);
		j += (size - 1);
	}
	printf("%d\n",s2)
}
