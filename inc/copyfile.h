#ifndef _COPYFILE_H_
#define _COPYFILE_H_

/*
 * Return values:
 *   0: Everything worked fine
 *	 1: Failed to open the source file
 *	 2: Failed to open the destination file
 */
int copyfile(char* sourcePath, char* destPath);

#endif
