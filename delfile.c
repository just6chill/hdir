#include "delfile.h"

#include <stdio.h>
#include <stdlib.h>

int delfile(char * args [])
{

    unsigned long size;
    unsigned long i;
    char          character;

    i = 0;

    FILE * rem = fopen(args [2], "w+b");
    if (rem != NULL) {
        fseek(rem, 0L, SEEK_END);
        size = ftell(rem);

        for (i = 0; i < size; i++) {
            character = rand() % 256;
            fwrite(&character, 1, 1, rem);
        }

        fclose(rem);
    }

    else {
        printf("Couldn't open file\n");
    }


    printf("deleting %s", args [2]);
    remove(args [2]);
    return 0;
}
