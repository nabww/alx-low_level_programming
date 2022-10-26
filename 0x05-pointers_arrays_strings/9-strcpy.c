


char *_strcpy(char *desc, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		desc[i] = src[i];
	desc[i] = '\0';
	return(desc);
}
