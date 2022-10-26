
/*
 *
 * swap values of two integers
 * returns new values
 */

void swap_int(int *a, int *b)
{	
	int temp = *a;

	*a = *b;
	*b = temp;
}
