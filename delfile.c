#include "delfile.h"

#include <stdio.h>
#include <stdlib.h>

int delfile(char *args[]) {
	
	unsigned long size, i;
	char C;
	
	FILE *rem = fopen(args[2], "w+b");
	if(rem != NULL) {
		fseek(rem, 0L, SEEK_END);
		size = ftell(rem);
		
	for(i=0; i<size; i++) {
		C=rand()%256;
		fwrite(&C,1,1,rem);
	}
		
	fclose(rem);
	
	}
	
	
	printf("deleting %s", args[2]);
	remove(args[2]);
	return 0;
}