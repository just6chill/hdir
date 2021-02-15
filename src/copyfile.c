#include "copyfile.h"
#include "cerror.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int copyfile(char* sourcePath, char* destPath) {

    FILE *source;
    FILE *dest;
    static char puffer1[BUFSIZ];
    static char puffer2[BUFSIZ];
    int character;
    time_t t1 = time(NULL);

    printf("Starting copy process \n");

    /* --------------------------
     * Try to open each file 
     * -------------------------- */
    source = fopen(sourcePath, "rb");
    dest = fopen(destPath, "wb");

    // Error reports
    if (source == NULL) {
        error(code[COPY_FILE_FAIL]);
    } else if (dest == NULL) {
        error(code[COPY_FILE_FAIL]);
    }

    /* --------------------------
     * Content transferation 
     * -------------------------- */
    setbuf(source, puffer1);
    setbuf(dest, puffer2);

    while ((character = getc(source)) != EOF)
        putc(character, dest);

    fclose(source);
    fclose(dest);

    printf("Copied in %d sec.\n", time(NULL) - t1);

    return 0;
}

