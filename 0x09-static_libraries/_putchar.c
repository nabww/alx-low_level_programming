#include <unistd.h>

/**
 * writes
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
