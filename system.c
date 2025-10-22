#include<stdio.h>
#include<string.h>
int main()
{
    char cmd[16];
    printf("System (REBOOT/SHUTDOWN): ");
    scanf("%15s",cmd);
    if(strcmp(cmd,"REBOOT")==0) printf("Rebooting\n");
    else if(strcmp(cmd,"SHUTDOWN")==0) printf("Shutting down\n");
    else printf("Invalid\n");
   
}
