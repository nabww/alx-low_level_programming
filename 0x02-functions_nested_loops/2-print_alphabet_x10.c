#include <stdio.h>

/**
 * main - check the code
 * retrun: always 0
 */

int main (void)
{
	int i;

	char r;

	for (i = 0; i < 10; i++)
	{
		for (r = 'a'; r <= 'z';r++)
		{
			putchar(r);
		}
	putchar('\n');		
	}
	return 0;
}
