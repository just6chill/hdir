#include "newdir.h"

#include <io.h>
#include <stdlib.h>
#include <stdio.h>

int newdir(char * path) {

	if(mkdir(path) == -1) {
		printf("could not create dir\n");
        return 1;
    }

	printf("created dir %s\n", path);
	
	return 0;
}
