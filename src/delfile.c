#include "delfile.h"
#include "cerror.h"

#include <stdio.h>
#include <stdlib.h>

int delfile(char *args[]) {

    unsigned long size;
    unsigned long i;
    char character;

	/* overwriting bytes with random numbers *
	 * to destroy the file                   */
    i = 0;
	
    FILE *rem = fopen(args[2], "w+b");
    if (rem != NULL) {
        fseek(rem, 0L, SEEK_END);
        size = ftell(rem);

        for (i = 0; i < size; i++) {
            character = rand() %256;
            fwrite(&character, 1, 1, rem);
        }

        fclose(rem);
    }

    else {
		//if file does not exist
        error(code[0]);
    }


	printf("start deleting file...\n");
	
    if((remove(args[2])) < 0){
		error(code[3]);
	}
	
	printf("deleted %s", args[2]);
	
	//checking if the file is still existing
	rem = fopen(args[2], "r");
	if(rem != NULL) {
		error(code[3]);
	}
	
    return 0;
}
