#include    <sys/socket.h>
#include    <netinet/in.h>
#include    <string.h>
#include    <stdio.h>
#include    <arpa/inet.h>

#include    "../headers/hacks.h"




void testTCP(){

    int socketInt = socket(AF_INET,SOCK_STREAM,0);
    cout<<"Output of socketInt is :"<< socketInt<<endl;

    struct sockaddr_in serverAddress;

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(443);
    serverAddress.sin_addr.s_addr = inet_addr("172.20.3.95");
    cout<<"serverAddress.sin_zero =>"<<serverAddress.sin_zero<<endl;
    memset(serverAddress.sin_zero,'\0',sizeof serverAddress.sin_zero);
    cout<<"serverAddress.sin_zero =>"<<serverAddress.sin_zero<<endl;

    int connectInt = connect(socketInt,(struct sockaddr *) &serverAddress, sizeof serverAddress);

    cout<<"Output of connect is :"<< connectInt<<endl;


    char * output = "G";

    send(socketInt,output,sizeof output,0);
    char buffer[1024*1024];
    recv(socketInt,buffer,1024*1024,0);
    cout<<"Response"<<buffer<<endl;


}
