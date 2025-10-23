#include<stdio.h>
#include<string.h>
int main()
{
    char command[10];
    printf("Enter camera command: ");
    scanf("%s", command);
    if(strcmp(command, "CAPTURE") == 0)
        printf("Photo captured successfully\n");
    else if(strcmp(command, "RECORD") == 0)
        printf("Video recording started.\n");
    else
        printf("Invalid camera command\n");
}
