/*** msg_snd.c ***/

#include "msg.h"
#include <stdio.h>
#include <string.h>

int main(){
    int msggid;
    Mesg msg;

    strcpy(msg.m_data, "God bless you !!!");
    msg.m_type = 10L;
    msggid = msgget(1235L, 0600|IPC_CREAT);
    msgsnd(msggid, &msg, 1024, 0);
}