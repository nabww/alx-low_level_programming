#include "main.h"
/**
 * _pow_recursion - check code
 * @x: int
 * @y: int
 * return: power of recursion
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)/*base cdtn*/
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
