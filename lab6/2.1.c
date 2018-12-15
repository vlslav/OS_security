#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void){
	int pid = fork();
	if (pid == 0) {
		printf ("Child: %d , Parent: %d \n", getpid(), getppid());
	}
	return 0;
}
