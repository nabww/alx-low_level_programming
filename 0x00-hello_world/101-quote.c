#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	int s=strlen("an that piece of art is useful\"-Dora Korpar,2015-10-19\n");
	write(2,
	"and that piece of art is useful\"-Dora Korpar, 2015-10-19\n",
	s);
	return (1);

}
