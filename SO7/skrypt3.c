#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
int main () {
pid_t id = fork();

	if ( id >0 )
    {
        
        printf ( "Proces rodzica procesu = %d\n" , getppid());
                sleep(60);
    }
    else{
        fork();
        fork();
        fork();
        
        printf ( "Proces potomka Procesu = %d\n" , getpid());
        exit(0);
    }
    	
        return 0;
}
