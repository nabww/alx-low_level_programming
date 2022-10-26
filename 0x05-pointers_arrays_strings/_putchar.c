#include <unistd.h>

/*
 * writing char to stout
 * returns -1 or 1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
