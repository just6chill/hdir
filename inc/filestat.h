#ifndef _FILESTAT_H_
#define _FILESTAT_H_

/*
 * What does it do?
 *	Returns the following information of a file:
 *	  - Size in bytes
 *	  - Permissions
 *	  - Date of the last changes
 *	  - User-ID
 *	  - On which drive it is
 *  
 * Parameters:
 *	 - file_path: The path to the file
 */
void filestat(char *file_path);

#endif
