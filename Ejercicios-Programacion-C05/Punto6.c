#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
	int rc = fork();
	int estado;
	if(rc==0){
		printf("Hola\n");
	}
	else{
		waitpid(rc, &estado, 0);
		printf("%d\n", estado);
		printf("Hasta luego\n");
	} 
	return 0;
}
