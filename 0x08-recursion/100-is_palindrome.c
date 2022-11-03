#include "main.h"

/**
 * length - check code
 * @s: string
 * Return: length of string
 **/

int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}

/**
*helper - check code
*@i: integer i
*@s: string
*Return: int value
**/

int helper(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		else
		{
			return (helper(i + 1, s + 1));
		}
	}
	return (1);
}

/**
 * is_palindrome - check code
 * @s: string
 * Return: boolean
 **/

int is_palindrome(char *s)
{
	int i = 1;

	return (helper(i, s));
}
