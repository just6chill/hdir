#include "copyfile.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int copyfile(char* args[]){
	
	FILE *q, *z;
	static char puffer1[BUFSIZ];
	static char puffer2[BUFSIZ];
	int c;
	time_t t1 = time(NULL);
	
	printf("starting copy process \n");
	
	q = fopen(args[2], "rb");
	if(q != NULL) {
		z = fopen(args[3], "wb");
		if(NULL == z) {
			printf("could not open %s", args[3]);
			return 1;
		}
	}
	else {
		printf("could not open %s", args[2]);
		return 1;
	}
	setbuf(q,puffer1);
	setbuf(z,puffer2);
	
	while((c = getc(q)) != EOF)
		putc(c,z);
	
	fclose(q);
	fclose(z);
	
	printf("copied in %d sec.", time(NULL)-1);
}