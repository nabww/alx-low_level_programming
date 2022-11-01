#include "main.h"
#include <stdio.h>


/**
 * main: check code
 * return: void
 */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < siz; i++)
	{
		s1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}
	printf("%d, %d", s1, s2);
}
