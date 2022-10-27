#include "main.h"


/**
 * main: check the code
 * return: 0 
 *
 */


char *leet(char *str)
{
	int i, k;
	 i = 0;

	 char s[] =  "aAeEoOtTlL";
	 char s1[] = "4433007711";

	 for (; str[i] != '\0'; i++)
	 {
		 for(k = 0;k <= 9; k++)
		 {
			 if (s[k] == str[i])
			 {
				 str[i] = s1[k];
			 }
		 }
	 }
	 return (str);
}
