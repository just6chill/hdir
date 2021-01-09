#ifndef _NEWDIR_H_
#define _NEWDIR_H_

/*
 * Parameters:
 *  - dir_names: The name of the directoies to create.
 *  - counter: the value of the parameters
 *
 * Return values:
 *	 0: Creating directory succeeded
 *	 errorcall: An error occured while creating the directory
 *
 *	 A little log message if it worked or not, will be printed as well
 */
int newdir(int counter, char *dir_name[]);

#endif
