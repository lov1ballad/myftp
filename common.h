#ifndef _COMMON_H_
#define _COMMON_H_

//所需头文件
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pwd.h>
#include <shadow.h>
#include <crypt.h>
#include <dirent.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include<netdb.h>

#include <time.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include<sys/wait.h>
#include <assert.h>

#include<linux/capability.h>
#include<sys/syscall.h>

//错误退出的封装
#define ERR_EXIT(msg)\
		do{\
			perror(msg);\
			exit(EXIT_FAILURE);\
		}while(0)
//为什么用do while语句，将1718行两句当做一个整体处理

#define MAX_COMMOND_LINE_SIZE 1024
#define MAX_CMD_SIZE 128
#define MAX_ARG_SIZE 1024
#define MAX_BUFFER_SIZE 1024
#define MAX_CWD_SIZE   512


#define MAX_SETTING_LINE_SIZE 1024
#define MAX_KEY_SIZE          128
#define MAX_VALUE_SIZE        512

#define MAX_BUCKET_SIZE       191
#define MAX_HOST_NAME_SIZE    256

#endif /* _COMMON_H */
