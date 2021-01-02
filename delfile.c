#include "delfile.h"

#include <cstddef>
#include <stdio.h>
#include <stdlib.h>

int delfile(char * path)
{

    FILE *        file;
    unsigned long size;
    unsigned long i;
    char          character;

    i    = 0;
    file = fopen(path, "w+b");

    /* -----------------
     * File testing 
     * ----------------- */
    if (file == NULL) {
        printf("Couldn't open file\n");
        return 1;
    }

    /* ------------------
     * Removing file 
     * ------------------ */
    fseek(file, 0L, SEEK_END);
    size = ftell(file);

    for (i = 0; i < size; i++) {
        character = rand() % 256;
        fwrite(&character, 1, 1, file);
    }

    fclose(file);

    printf("deleting %s\n", path);
    remove(path);
    return 0;
}
