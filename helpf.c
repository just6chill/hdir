#include "helpf.h"

#include <stdio.h>

#define WHITESPACE printf("\n");

int helpf(char *args[]) {
	
	printf("syntax: 'hdir <suffix> <parameter1> <parameter2>' \n ");
	WHITESPACE
	printf("suffix: \n");
	WHITESPACE
	printf("r: rename a file or a folder \nExample: 'hdir r examplefile newname' \n ");
	WHITESPACE
	printf("c: copy a file \nExample: 'hdir c examplefile newfilename' \n ");
	WHITESPACE
	printf("d: delete a file \nExample: 'hdir d examplefile'	\n ");
	WHITESPACE
	printf("f: create a folder \nExample: 'hdir f examplefoldername' \n ");
	WHITESPACE
	printf("n: create a file with given extension \nExample: 'hdir n example.txt' \n ");
	WHITESPACE
	printf("k: delete a folder \nExample: 'hdir k examplefolder' \n ");
	WHITESPACE
	printf("l: show all files and subfolders of the named folder/directory \nExample: 'hdir l examplefolder' \n ");
	WHITESPACE
	printf("h: type 'hdir h' for help");
	WHITESPACE
	WHITESPACE
	WHITESPACE
	printf("hdir made by just6chill (github/xda)");
	
	return 0;
	
}