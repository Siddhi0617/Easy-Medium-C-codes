#include<stdio.h>
#include<string.h>
int main()
{
    char cmd[16];
    printf("Alarm (ARM/DISARM/SNOOZE): ");
    scanf("%15s",cmd);
    if(strcmp(cmd,"ARM")==0) printf("Alarm Armed\n");
    else if(strcmp(cmd,"DISARM")==0) printf("Alarm Disarmed\n");
    else if(strcmp(cmd,"SNOOZE")==0) printf("Alarm Snoozed\n");
    else printf("Invalid\n");
    return 0;
}
