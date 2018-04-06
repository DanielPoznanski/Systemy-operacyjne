#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main () {
int id ;
id = fork();

	if ( id == 0 )
    {
        printf ( "Proces potomka PID = %d\n" , getpid());
        printf ( "Proces rodzica PID = %d\n" , getppid());
    }
    else{
        
        printf ( "Proces potomka PID = %d\n" , getpid());
        printf ( "Proces rodzica PID = %d\n" , getppid());
    }
}
