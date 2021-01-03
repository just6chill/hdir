#include "newfile.h"

#include <stdio.h>
#include <stdlib.h>

int newfile(char * path) {
	FILE *file;
	
	file = fopen(path, "r");

	if(file != NULL) {
		printf("file is already existing, please choose another name");
		return 1;
	}

	file = fopen(path, "a+");
	fclose(file);
	printf("succesfully created %s", path);
	return 0;
}
