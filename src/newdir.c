#include "newdir.h"
#include "cerror.h"

#include <io.h>
#include <stdlib.h>
#include <stdio.h>

int newdir(int counter, char *dir_name[]) {
	
	int index = 2;

	do{
		//did we created the dir succesfully?
		if(mkdir(dir_name[index]) == -1) {
			error(code[CREATE_FILE_DIR_FAIL]);
		}
		printf("created dir %s\n", dir_name[index]);
		index++;
	}
	while(counter > index);
	
	return 0;
}
