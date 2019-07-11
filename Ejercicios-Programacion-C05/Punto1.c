#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	int x = 50;
	int rc = fork();
	if (rc == 0) {
		x++;
		printf("Valor de x para el hijo: %d \n",x);                
	}
	else {
		wait();
		x+=4;
		printf("Valor de x para el padre: %d\n",x);
	}
	return 0;                                                                                                                                                                                                           	return 0;
}
