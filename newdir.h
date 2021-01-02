#ifndef _NEWDIR_H_
#define _NEWDIR_H_

/*
 * Parameters:
 *  - dir_name: The name of the directory to create.
 *
 * Return values:
 *	 0: Creating directory succeeded
 *	 1: An error occured while creating the directory
 *
 *	 A little log message if it worked or not, will be printed as well
 */
int newdir(char * dir_name);

#endif
