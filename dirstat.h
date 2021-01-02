#ifndef _DIRSTAT_H_
#define _DIRSTAT_H_

/*
 * Return values:
 *  0: Successfully got the stats of the directory
 *  1: Couldn't open the directory
 */
int dirstat(char * path);

#endif
