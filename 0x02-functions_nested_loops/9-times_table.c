#include <stdio.h>

/**
 * main: check cod
 * return: 
 */


 void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 9; i++)
		for ( j = 0; j < 9; j++)
		{
			res = (i * j);
			if (j != 0)
			{
				putchar(',');
				putchar(' ');
			}
			if (res >= 10)
			{
				putchar((res / 10) + '0');
				putchar((res % 10) + '0');
			}
			else if (j != 0 && res < 10)
			{
				putchar(' ');
				putchar((res % 10) + '0');
			}
			else
				putchar((res % 10) + '0');
		}

}
