#include "newfile.h"

#include <stdio.h>
#include <stdlib.h>

int newfile(char *args[]) {
	FILE *file;
	
	file = fopen(args[2], "r");
	if(file != NULL) {
		printf("file is already existing, please choose another name");
		fclose(file);
		return 1;
	}
	else {
		file = fopen(args[2], "a+");
		fclose(file);
		printf("succesfully created %s", args[2]);
		return 0;
	}
}