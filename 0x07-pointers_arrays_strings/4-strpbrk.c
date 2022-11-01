#include "main.h"



char *_strpbrk (char *s, char *accept)
{
	int i, j;
	int len_long_str = strleng(s);
	int len_accept = strnglen(accept);

	for (i = 0; i < len_long_str - 1; i++)
	{
		for (j = 0; j <len_accept - 1; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (0);
}


int strleng (char *a)
{
	int i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	i++;
	return (i);
}
