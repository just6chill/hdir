#include "renamefile.h"
#include <stdio.h>
#include <stdlib.h>

int renamefile(char* args[]) {
	if ((rename(args[2], args[3]))<0) {
		printf("Fehler");
		return 1;
	}
	printf("renamed %s to %s", args[2], args[3]);
	return 0;
}