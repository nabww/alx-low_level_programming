#include "main.h"


/*
 *
 * main: check code
 * return: reversed array
 *
 */

void reverse_array(int *a, int n)
{
	int left, right, tmp;


	right = n-1;
	left = 0;


	while (left < right)
	{
		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;

		left++;
		right--;
	}
}
