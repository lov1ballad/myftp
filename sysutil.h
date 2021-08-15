#ifndef _SYSUTIL_H
#define _SYSUTIL_H

#include"common.h"

void getlocalip(char *ip);

//服务器套接字的创建
int tcp_server(const char *host, unsigned short port);

int tcp_client(int port);

char* statbuf_get_perms(struct stat *sbuf);

char* statbuf_get_date(struct stat *sbuf);

void send_fd(int sock_fd, int fd);
int  recv_fd(const int sock_fd);

unsigned long long get_time_sec();//获取当前的秒数
unsigned long long get_time_usec();//获取微秒数
void nano_sleep(double sleep_time);//模拟int nanosleep(const struct timespec *req, struct timespec *rem);

#endif /*_SYSUTIL_H */

