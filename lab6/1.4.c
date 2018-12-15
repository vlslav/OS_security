#include <stdio.h>

extern char **environ;
int main (int argc, char *argv[])
{
	char **p = environ;
	int num = 0;
	while (*p != NULL && num < atoi(argv[1])){
		printf ("%s \n", *p);
		p++;
		num++;
	}
	return 0;
}
