#include<stdio.h>
#include<string.h>
int main()
{
    char command[10];
    printf("Enter belt command: ");
    scanf("%s", command);
    if(strcmp(command, "RUN") == 0)
        printf("Conveyor belt is running.\n");
    else if(strcmp(command, "STOP") == 0)
        printf("Conveyor belt stopped.\n");
    else
        printf("Invalid belt command!\n");
}
