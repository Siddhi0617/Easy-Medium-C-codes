#include<stdio.h>
#include<string.h>
int main()
{
    char cmd[16];
    printf("Pump (ON/OFF/AUTO): ");
    scanf("%15s",cmd);
    if(strcmp(cmd,"ON")==0) printf("Pump ON\n");
    else if(strcmp(cmd,"OFF")==0) printf("Pump OFF\n");
    else if(strcmp(cmd,"AUTO")==0) printf("Pump AUTO mode\n");
    else printf("Invalid\n");
 
}
