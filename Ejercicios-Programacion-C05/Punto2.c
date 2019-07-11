#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	FILE* file = fopen("texto", "a");
	if (file == NULL) {
		printf("\nArchivo no leido\n ");
	} 
	else {
		int rc = fork();
		if (rc < 0) {
	    		fprintf(stderr, "Error en la función fork()\n");
	    		fclose(file);
	    		exit(1);
	    }
	 	else if (rc == 0) {
	   	 	for (int x=0; x<10; x=x+1) 
				fprintf(file, "Hijo: %d\n", x);
		}
	 	else {
    		for (int x=0; x<10; x++) 
        		fprintf(file, "Padre: %d\n", x);
		}
		fclose(file);
	}
	return 0;
}
