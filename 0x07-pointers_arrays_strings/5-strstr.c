#include "main.h"


/**
 * main: check code
 * return: string
 *
 */

char *_strstr(char *needle, char *haystack)
{
	int i;
	int j;

	while (*(haystack + i))
	{
		if (*(haystack + i) == *(needle + j))
		{
			j++;
			if (*(needle + j) == '\0')
			{
				return ((haystack + i) - (j - 1));
			}
		}else 
				j = 0;
			i++;
	}
	if (needle == '\0')
			return (haystack);
	return (0);

}
