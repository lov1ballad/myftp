#ifndef _SESSION_H_
#define _SESSION_H_

#include "common.h"

//会话结构
typedef struct session
{
    //保存控制连接
    uid_t uid;
    int ctrl_fd;//sockConn
    char cmdline[MAX_COMMOND_LINE_SIZE];//接受客户端的命令
    char cmd[MAX_CMD_SIZE];
    char arg[MAX_ARG_SIZE];

    //数据连接
    struct sockaddr_in *port_addr;
    int data_fd;
    int pasv_listen_fd;
	int    data_process;  //用于判断是否处于数据连接状态

    //ftp协议状态
	char *rnfr_name;
    int is_ascii;
	long long restart_pos;//续传起始点
	unsigned int  max_clients;
	unsigned int  max_per_ip;

	//父子进程通道
	int parent_fd;
	int child_fd;

	//限速
	unsigned long long transfer_start_sec;//开始传输的秒数
	unsigned long long transfer_start_usec;//开始传输的微秒数
}session_t;

void begin_session(session_t *sess);
#endif /*_SESSION_H_*/
