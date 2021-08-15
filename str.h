#ifndef _STR_H_
#define _STR_H_

#include "common.h"

//解析命令行
void str_trim_crlf(char *str);
void str_split(const char *str,char *left,char *right,char token);
void str_upper(char *str);

#endif /* _STR_H_*/
