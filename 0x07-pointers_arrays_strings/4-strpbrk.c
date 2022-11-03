#include "main.h"



char *_strpbrk (char *s, char *accept)
{
	int j;
	 while (*s != '\0')
	 {
		 j = 0;
		 while (accept[j] != '\0')
		 {
			 if(*s == accept[j])
			 {
				 return (s);
			 }
			 j++;
		 }
		 s++;
	 }
	 return (0);
}
