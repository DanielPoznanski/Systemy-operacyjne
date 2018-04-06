#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main () {
pid_t id = fork();

	if ( id == 0 )
    {
        
        printf ( "Proces rodzica procesu = %d\n" , getppid());
    }
    else{
        fork();
        fork();
        printf ( "Proces potomka Procesu = %d\n" , getpid());
    }
    	int wait();
        return 0;
}
