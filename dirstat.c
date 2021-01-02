#include "dirstat.h"

#include <dirent.h>
#include <stdio.h>

int dirstat(char * path)
{
    DIR *           dir;
    struct dirent * dirpointer;

    if ((dir = opendir(path)) != NULL) {
        while ((dirpointer = readdir(dir)) != NULL)
            printf("%s\n", dirpointer->d_name);
    }
    else {
        printf("error");
        return 1;
    }
    return 0;
}
