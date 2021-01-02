#include "filestat.h"

#include <stdio.h>
#include <stdlib.h>
#include <sys\stat.h>
#include <time.h>

#define WHITESPACE printf("\n");
#define LINE printf("-------------------------------------");

int filestat(char *args[]) {
	
	struct stat attribute;
	stat(args[2], &attribute);
	
	WHITESPACE
	printf("stats of %s: \n", args[2]);
	LINE
	WHITESPACE
	printf("size in bytes: %ld \n", attribute.st_size);
	printf("perms: %o \n", attribute.st_mode & 0007);
	printf("last change: %s", ctime(&attribute.st_atime));
	printf("user-id: %d \n", attribute.st_uid);
	printf("drive: %c (%d) \n", attribute.st_dev + 'A', attribute.st_dev);
}