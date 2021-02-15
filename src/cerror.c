#include "cerror.h"
#include "color.h"

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


const char *code[7] = {
	"no such file or directory\n",
	"file or directory with this name already exist\n",
	"invalid numbers of parameter\n",
	"could not delete file or directory\n",
	"could not create file or directory\n",
	"could not copy file\n",
	"could not rename file or directory\n"
};

/*-------------------------
 *0 = NO_FILE_DIR
 *1 = FILE_DIR_EXIST
 *2 = INVALID_PARAMETER_NUM 
 *3 = DELETE_FILE_DIR_FAIL
 *4 = CREATE_FILE_DIR_FAIL
 *5 = COPY_FILE_FAIL
 *6 = RENAME_FILE_DIR_FAIL
--------------------------*/

int error(const char *code, ...) {
	va_list pointer;
	va_start(pointer, code);
	
	red("ERROR: ");
	vfprintf(stderr, code, pointer);
	
	exit(1);
	
	va_end(pointer);
	
}

			
			
			