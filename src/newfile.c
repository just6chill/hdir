#include "newfile.h"
#include "cerror.h"

#include <stdio.h>
#include <stdlib.h>

int newfile(int counter, char *args[]) {
	
	FILE *file;
	
	int index = 2;
	
	do{
		//does a file with the given name already exist?
		file = fopen(args[index], "r");
		if(file != NULL) {
			fclose(file);
			error(code[FILE_DIR_EXIST]);
		}
	
		else {
			file = fopen(args[index], "a+");
			fclose(file);
		
			//is the file here after we created it?
			file = fopen(args[index], "r");
			if(file == NULL) {
				fclose(file);
				error(code[CREATE_FILE_DIR_FAIL]);
			}
		
			printf("succesfully created %s\n", args[index]);
			
			index++;
		}
	}
	
	while(counter > index);
		
	return 0;
	}
