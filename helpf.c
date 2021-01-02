#include "helpf.h"

#include <stdio.h>

#define WHITESPACE printf("\n");

int helpf(char *args[]) {
	
	printf("syntax: 'hdir <suffix> <parameter1> <parameter2>' \n ");
	WHITESPACE
	printf("suffix: \n");
	WHITESPACE
	printf("r: rename a file or a folder \nExample: 'hdir r example.txt newname.txt' \n ");
	WHITESPACE
	printf("c: copy a file \nExample: 'hdir c example.txt newfile.txt' \n ");
	WHITESPACE
	printf("d: delete a file \nExample: 'hdir d example.txt'	\n ");
	WHITESPACE
	printf("f: create a folder \nExample: 'hdir f examplefoldername' \n ");
	WHITESPACE
	printf("n: create a file with given extension \nExample: 'hdir n example.txt' \n ");
	WHITESPACE
	printf("k: delete a folder \nExample: 'hdir k examplefolder' \n ");
	WHITESPACE
	printf("l: show all files and subfolders of the named folder/directory \nExample: 'hdir l examplefolder' \n ");
	WHITESPACE
	printf("s: show stats of a file (size, perms, last change, user-id, drive) \nExample: 'hdir s example.txt' \n");
	WHITESPACE
	printf("h: type 'hdir h' for help");
	WHITESPACE
	WHITESPACE
	WHITESPACE
	printf("hdir made by just6chill (github/xda)");
	
	return 0;
	
}