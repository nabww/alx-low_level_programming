/**
 * returns length of the string
 * /
 *
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0';s++)
		len++;
	return len;
}
