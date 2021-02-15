#ifndef _CERROR_H_
#define _CERROR_H_

const char *code[7];
enum codes {NO_FILE_DIR, FILE_DIR_EXIST, INVALID_PARAMETER_NUM, DELETE_FILE_DIR_FAIL, CREATE_FILE_DIR_FAIL, COPY_FILE_FAIL, RENAME_FILE_DIR_FAIL};
int error(const char *code, ...);

#endif