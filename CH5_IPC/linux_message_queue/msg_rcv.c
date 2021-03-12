/*** msg_rcv.c ***/

#include "msg.h"
#include <stdio.h>

int main(){
    int msggid;
    Mesg msg;

    msggid = msgget(1235L, 0);
    msgrcv(msggid, &msg, 1024, 10L, 0);
    printf("%s\n", msg.m_data);
    msgctl(msggid, IPC_RMID, 0);
}