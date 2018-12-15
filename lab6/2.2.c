#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void){
	int pid = fork();
	if (pid == 0) {
		printf ("Child pid: %d , Parent pid: %d \n", getpid(), getppid());
		sleep(5);
	}
	else if ( pid > 0 ) {
		printf ("From parent pid: %d \n", pid);
		sleep (5); 
	}
	return 0;
}
