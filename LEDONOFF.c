#include<stdio.h>
#include<string.h>
int main()
 {
    char command[10];
    printf("Enter LED command (ON/OFF): ");
    scanf("%s", command);

    if(strcmp(command, "ON") == 0)
        printf("LED is turned ON!\n");
    else if(strcmp(command, "OFF") == 0)
        printf("LED is turned OFF!\n");
    else
        printf("Invalid LED command!\n");
 }
