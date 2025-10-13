#include<stdio.h>
#include<string.h>
int main()
{
    char command[10];
    printf("Enter a command:");
    scanf("%s",command);
    if(strcmp(command,"START")==0)
    {
        printf("Robot is Started! \n");
    }
    else if(strcmp(command,"STOP")==0)
    {
        printf("Robot is Stopped! \n");
    }
    else
    {
        printf("Invalid command!");
    }

}