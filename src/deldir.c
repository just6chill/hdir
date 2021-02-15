#include "deldir.h"
#include "cerror.h"

#include <io.h>
#include <stdio.h>
#include <stdlib.h>

int deldir(char *args[]) {
	
	//look if file could be deleted
    if(rmdir(args[2]) == -1) {
       error(code[NO_FILE_DIR]);
    }

    printf("succesfully deleted %s", args [2]);

    return 0;
}
