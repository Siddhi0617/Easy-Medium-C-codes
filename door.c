#include<stdio.h>
#include<string.h>
int main()
{
    char cmd[16];
    printf("Door (OPEN/CLOSE/LOCK): ");
    scanf("%15s",cmd);
    if(strcmp(cmd,"OPEN")==0) printf("Door Opened\n");
    else if(strcmp(cmd,"CLOSE")==0) printf("Door Closed\n");
    else if(strcmp(cmd,"LOCK")==0) printf("Door Locked\n");
    else printf("Invalid\n");

}
