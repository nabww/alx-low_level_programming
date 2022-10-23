#include <stdio.h>


/*main- check code
 * return: always 0
 */


int main(void)
{
	int c;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}


