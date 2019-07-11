#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int rc = fork();
	if (rc==0)
		printf("\nHola\n");
	else{
		sleep(1);
		printf("\nHasta luego\n");
	}
	
	return 0;
}
