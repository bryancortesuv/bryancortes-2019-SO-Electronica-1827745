#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int rc = fork();
    if (rc == 0) 
    {
        char * const argv[] = {"ls", NULL};
        execvp("ls", argv);
    }else{
        wait(NULL);
	}
    rc = fork();
    if (rc == 0) 
    {
        char * const argv[] = {"ls", NULL};
        execv("/bin/ls", argv);
    }else{
        wait(NULL);
	}
    rc = fork();
    if (rc == 0) 
    {
		execlp("ls", "ls", NULL);
    }else{
        wait(NULL);
	}
    rc = fork();
    if (rc == 0) 
    {
        execl("/bin/ls", "ls", NULL);
    }else{
        wait(NULL);
	}
	rc = fork();
    if (rc == 0) 
    {
        char * const argv[] = {"ls", NULL};
        char * const envp[] = {NULL};
        execvpe("ls", argv, envp);
    }else{
    	wait(NULL);
	}		
    rc = fork();
    if (rc == 0) 
    {
        char * const argv[] = {"ls", NULL};
        char * const envp[] = {NULL};
        execle("/bin/ls", "ls", NULL, envp);
    }else{
        wait(NULL);
	}
    return 0;
}
