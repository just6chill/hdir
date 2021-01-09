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

int error(const char *code, ...) {
	va_list pointer;
	va_start(pointer, code);
	
	red("ERROR: ");
	vfprintf(stderr, code, pointer);
	
	exit(1);
	
	va_end(pointer);
	
}
			
			
			