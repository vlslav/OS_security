#include <stdio.h>

extern char **environ;
int main (int argc, char *argv[])
{
	char **p;
	int num = 0;
	for (p = environ; *p != NULL ; p++)
	num++;
	printf ("Number of environment variables: %d \n", num);
	printf("Number of command arguments: %d \n", argc);
	return 0;

}a
