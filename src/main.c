#include<stdio.h>//perror 
#include <stdlib.h>//exit






//经典报错函数
void perr_exit(const char *s){
	perror(s);
	exit(-1);
}


//初始化服务器
int startup(unsigned short *port){


    //s


    //b
    //l




}


int main(void){
    int listen_fd=-1;//监听套接字:就是int
    unsigned short port=9527;

    listen_fd=startup(&port);
    printf("服务器初始化成功!\n");












    return 0;
}