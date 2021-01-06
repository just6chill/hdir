#include "copyfile.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int copyfile(char * sourcePath, char * destPath)
{

    FILE *      source;
    FILE *      dest;
    static char puffer1 [BUFSIZ];
    static char puffer2 [BUFSIZ];
    int         character;
    time_t      t1 = time(NULL);

    printf("Starting copy process \n");

    /* --------------------------
     * Try to open each file 
     * -------------------------- */
    source = fopen(sourcePath, "rb");
    dest = fopen(destPath, "wb");

    // Error reports
    if (source == NULL) {
        printf("Couldn't open sourcefile!\n");
        return 1;
    } else if (dest == NULL) {
        printf("Couldn't open destination file!\n");
        return 2;
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

    printf("Copied in %ld sec.\n", time(NULL) - 1);

    return 0;
}
