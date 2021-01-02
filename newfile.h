#ifndef _NEWFILE_H_
#define _NEWFILE_H_

/*
 * Return values:
 *	 0: Successfully created file
 *	 1: Couldn't create the file. It probably exist already or 
 *	    it's a permission issue.
 */
int newfile(char * path);

#endif
