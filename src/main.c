#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "renamefile.h"
#include "copyfile.h"
#include "delfile.h"
#include "newdir.h"
#include "newfile.h"
#include "deldir.h"
#include "dirstat.h"
#include "helpf.h"
#include "filestat.h"

#include "cerror.h"

int main(int argc, char* argv[]) {
	
	if(argc < 2){

		printf("type 'hdir h' without ' ' and try again\n");
		error(code[INVALID_PARAMETER_NUM]);
	}
	
	switch(argv[1][0]) 
	{
		case 'r': renamefile(argv); break;
		
		case 'c': copyfile(argv[2], argv[3]); break;
		
		case 'd': delfile(argv); break;
		
		case 'f': newdir(argc, argv); break;
		
		case 'n': newfile(argc, argv); break;
		
		case 'k': deldir(argv); break;
		
		case 'l': dirstat(argv); break;
		
		case 'h': helpf(argv); break;
		
		case 's': filestat(argv[2]); break;
		
		default:
			printf("type 'hdir h' without ' ' and try again\n");
			error(code[INVALID_PARAMETER_NUM]);
	}

    return EXIT_SUCCESS;

	//test from clion
}
