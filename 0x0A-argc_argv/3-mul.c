#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: i
 * @argv: i
 * Return - o
 **/

int main(int argc, char *argv[])
{
	int i;
	int res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
