#include <stdio.h>

/**
 * main - prints args
 * @argc: input
 * @argv: also an input
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
