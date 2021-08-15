#ifndef _COMMON_H_
#define _COMMON_H_

//����ͷ�ļ�
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

//�����˳��ķ�װ
#define ERR_EXIT(msg)\
		do{\
			perror(msg);\
			exit(EXIT_FAILURE);\
		}while(0)
//Ϊʲô��do while��䣬��1718�����䵱��һ�����崦��

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
