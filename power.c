#include<stdio.h>
#include<string.h>

int main()
 {
    char power[10];
    printf("Enter power command (ON/OFF): ");
    scanf("%s", power);

    if(strcmp(power, "ON") == 0)
        printf("System Powered ON.\n");
    else if(strcmp(power, "OFF") == 0)
        printf("System Powered OFF.\n");
    else
        printf("Invalid command.\n");

}
