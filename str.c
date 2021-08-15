#include "str.h"

//USER ljl\r\n
void str_trim_crlf(char *str)
{
    char *p = str + (strlen(str)-1);
    while(*p == '\r' || *p == '\n')
        *p-- = '\0';//此时命令变为USER ljl
}

void str_split(const char *str, char *left, char *right, char token)
{
    //left存命令，right存内容
    char *pos = strchr(str, token);
    if(pos == NULL)
        strcpy(left,str);
    else
    {
        strncpy(left, str,pos-str);
        strcpy(right,pos+1);
    }
}

void str_upper(char *str)
{
	while(*str != '\0')
	{
		if(*str >= 'a' && *str<='z')
			*str -= 32;
		str++;
	}
}