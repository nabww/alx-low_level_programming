#include "main.h"


/**
 * main: check code
 * return: string
 *
 */

char *_strstr(char *needle, char *haystack)
{
	int x;
	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		x = 0;
		if (haystack [x] == needle [x])
		{
			do {
				if (needle[x + 1] == '\0')
				{
					return (haystack);
					x++;
				}
		}while (haysctack[x] == needle[x]);

	}
		haystack++;

	}
	return ('\0');
}
