#include "newdir.h"

#include <io.h>
#include <stdlib.h>
#include <stdio.h>

int newdir(char * dir_name) {

	if(mkdir(dir_name) == -1) {
		printf("could not create dir\n");
        return 1;
    }

	printf("created dir %s\n", dir_name);
	
	return 0;
}
