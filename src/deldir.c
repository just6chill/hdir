#include "deldir.h"

#include <io.h>
#include <stdio.h>
#include <stdlib.h>

int deldir(char * args [])
{
    if (rmdir(args [2]) == -1) {
        printf("could not delete %s", args [2]);
        return 1;
    }

    printf("succesfully deleted %s", args [2]);

    return 0;
}
