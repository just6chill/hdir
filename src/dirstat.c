#include "dirstat.h"
#include "cerror.h"

#include <dirent.h>
#include <stdio.h>

int dirstat(char* args[]) {
    DIR *dir;
    struct dirent *dirpointer;

    if ((dir = opendir(args [2])) != NULL) {
        while ((dirpointer = readdir(dir)) != NULL)
            printf("%s\n", dirpointer->d_name);
    }
    else {
		//if directory does not exist
        error(code[0]);
    }
    return 0;
}
