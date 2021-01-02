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

int main(int argc, char* argv[]) {
	
	
	switch(argv[1][0]) 
	{
		case 'r': renamefile(argv); break;
		
		case 'c': copyfile(argv[2], argv[3]); break;
		
		case 'd': delfile(argv); break;
		
		case 'f': newdir(argv[2]); break;
		
		case 'n': newfile(argv); break;
		
		case 'k': deldir(argv); break;
		
		case 'l': dirstat(argv); break;
		
		case 'h': helpf(argv); break;
		
		case 's': filestat(argv[2]); break;
		
		default:
			printf("type 'hdir h' without ' ' and try again");
			return EXIT_FAILURE;
	}

    return EXIT_SUCCESS;
}
