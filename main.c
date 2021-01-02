#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "copyfile.h"
#include "deldir.h"
#include "delfile.h"
#include "dirstat.h"
#include "filestat.h"
#include "helpf.h"
#include "newdir.h"
#include "newfile.h"
#include "renamefile.h"

int main(int argc, char * argv [])
{

    // make sure that the user provided enough information
    // or does he/she only wants to get the help page?
    if (argc > 1 || argv [1][0] == 'h') {
        switch (argv [1][0])
        {
            case 'r':
                renamefile(argv);
                break;

            case 'c':
                // Special case: Make sure that the user provided the source and
                // the destination path!
                if (argc < 3) {
                    printf("Please add a source path and a destination path!\n");
                    return EXIT_FAILURE;
                }

                copyfile(argv [2], argv [3]);
                break;

            case 'd':
                delfile(argv [2]);
                break;

            case 'f':
                newdir(argv [2]);
                break;

            case 'n':
                newfile(argv [2]);
                break;

            case 'k':
                deldir(argv [2]);
                break;

            case 'l':
                dirstat(argv [2]);
                break;

            case 'h':
                helpf(argv);
                break;

            case 's':
                filestat(argv [2]);
                break;
        }

        return EXIT_SUCCESS;
    }

    // The user forgot to add the path to do something
    printf("type 'hdir h' without ' ' and try again");
    return EXIT_FAILURE;
}
