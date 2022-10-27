#include <main.h>


/***
 *
 * main: encode using rot13
 * return: 0;
 *
 */

char *rot13(char *str)
{
	int i, j;
	 i = 0;

	 char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	 char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	 for (; str[i] != '\0'; i++)
	 {
		 for (j = 0; j <= 51; j++)
		 {
			 if (s[j] == str[i])
			 {
				 str[i] = s1[j];
			 }
		 }
	 }
	 return (str);
}
