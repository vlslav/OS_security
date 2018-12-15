
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void){
	int k;
	int ppid = getpid();
	for (k = 0; k < 10; k++)
	{
		if (getpid() == ppid)
		{
			fork();
		}	
	}
	sleep (10);
	return 0;
}
