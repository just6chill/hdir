#include "newdir.h"

#include <io.h>
#include <stdlib.h>
#include <stdio.h>

int newdir(char *args[]) {
	if(mkdir(args[2]) == -1)
		printf("could not create dir");
	
	else
		printf("created dir %s", args[2]);
	
	return 0;
}