#include <stdio.h>

extern char **environ;
int main (int argc, char *argv[])
{
	char **p = environ;
	int num = 1;
	while (*p != NULL && num < 11 ){
		printf ("%s \n", *p);
		p++;
		num++;
	}
	return 0;
}
