#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
	int rc = fork();
	if(rc==0){
		int rc_wait = wait(NULL);
		printf("%d\n", rc_wait);
		printf("Hola\n");
	}
	else{
		int rc_wait = wait(NULL);
		printf("%d\n", rc_wait);
		printf("Hasta luego\n");
	} 
	return 0;
}
