#include "helpf.h"
#include "color.h"

#include <stdio.h>
#include <windows.h>

#define WHITESPACE printf("\n");

int helpf(char *args[]) {
	
	/* start help output */
	
	green("syntax"); printf(": '"); green("hdir "); printf("<"); green("suffix"); printf("> <"); green("parameter1"); printf("> <"); green("parameter2"); printf(">' \n");
	
	printf("'"); green("r"); printf("' - rename a file or a folder \n    Example: 'hdir r example.txt newname.txt' \n ");
	WHITESPACE
	printf("'"); green("c"); printf("' - copy a file \n    Example: 'hdir c example.txt newfile.txt' \n ");
	WHITESPACE
	printf("'"); green("d"); printf("' - delete a file \n    Example: 'hdir d example.txt'	\n ");
	WHITESPACE
	printf("'"); green("f"); printf("' - create a folder \n    Example: 'hdir f examplefoldername' \n ");
	WHITESPACE
	printf("'"); green("n"); printf("' - create a file with given extension \n    Example: 'hdir n example.txt' \n ");
	WHITESPACE
	printf("'"); green("k"); printf("' - delete a folder \n    Example: 'hdir k examplefolder' \n ");
	WHITESPACE
	printf("'"); green("l"); printf("' - show all files and subfolders of the named folder/directory \n    Example: 'hdir l examplefolder' \n ");
	WHITESPACE
	printf("'"); green("s"); printf("' - show stats of a file (size, perms, last change, user-id, drive) \n    Example: 'hdir s example.txt' \n");
	WHITESPACE
	printf("'"); green("h"); printf("' - type 'hdir h' for help \n");
	WHITESPACE
	printf("hdir made by "); green("just6chill"); printf("(github/xda)"); 

	return 0;
	
}