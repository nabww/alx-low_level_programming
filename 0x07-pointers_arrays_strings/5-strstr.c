#include "main.h"


/**
 * _strstr - check code
 * @str1: variable
 * @str2: variable
 * @needle:var
 * @haystack: var
 * Return: string
 *
 */

char *_strstr(char *needle, char *haystack)
{
	char *str1, *str2;
	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);

}
