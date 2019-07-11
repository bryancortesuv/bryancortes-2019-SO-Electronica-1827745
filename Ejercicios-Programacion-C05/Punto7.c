#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int rc = fork();
    if (rc == 0) 
    {
        close(STDOUT_FILENO);
        printf("Hola mundo\n");
    }else{
        wait(NULL);
        printf("Adios\n");
    }
    return 0;
}
