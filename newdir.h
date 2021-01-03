#ifndef _NEWDIR_H_
#define _NEWDIR_H_

/*
 * Parameters:
 *  - path: The path to the directory
 *
 * Return values:
 *	 0: Creating directory succeeded
 *	 1: An error occured while creating the directory
 *
 *	 A little log message if it worked or not, will be printed as well
 */
int newdir(char * path);

#endif
