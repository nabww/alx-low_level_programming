#include <stdio.h>

/**
 * this is the entry point
 * return is 0
 */

int main (void)
{
	char a;
	for (a='z';a>='a';a--)
	{
		putchar(a);
	}
	putchar('\n');
	return 0;
}

