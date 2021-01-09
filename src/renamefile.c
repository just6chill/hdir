#include "renamefile.h"
#include "cerror.h"

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int renamefile(char* args[]) {
	
	FILE *file = fopen(args[3], "r");
	DIR *dir = opendir(args[3]);
	
	//is a file/dir with the target name already existing?
	if(file || dir != NULL) {
		fclose(file);
		error(code[1]);
	}
	
	file = fopen(args[2], "r");
	dir = opendir(args[2]);
	
	//is our dir/file already existing?
	if(dir == NULL || file == NULL) {
		error(code[0]);
	}
	
	fclose(file);
	
	
	if ((rename(args[2], args[3]))<0) {
		error(code[6]);
	}
	printf("renamed %s to %s", args[2], args[3]);
	return 0;
}
