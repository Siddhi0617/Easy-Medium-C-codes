#include<stdio.h>
#include<string.h>
int main()
{
    char command[10];
    printf("Enter engine command: ");
    scanf("%s", command);
    if(strcmp(command, "START") == 0)
        printf("Car engine started!\n");
    else if(strcmp(command, "STOP") == 0)
        printf("Car engine stopped!\n");
    else
        printf("Invalid engine command!\n");
}
