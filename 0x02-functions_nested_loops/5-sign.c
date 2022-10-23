#include <stdio.h>
/*Main - check code
 * return: 1 if positive
 * 	0 if 0
 * 	-1 if negative
 */

int print_sign (int n)
{
	if (n > 0)
	{
		putchar('+');
		return 0;
	}
	else if (n == 0)
	{
		putchar('0');
		return 0;
	}
	else 
	{
		putchar('-');
		return (-1);
	}
}

