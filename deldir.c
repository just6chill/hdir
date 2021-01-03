#include "deldir.h"

#include <io.h>
#include <stdio.h>
#include <stdlib.h>

int deldir(char * path)
{
    if (rmdir(path) == -1) {
        printf("could not delete %s\n", path);
        return 1;
    }

    printf("succesfully deleted %s\n", path);

    return 0;
}
