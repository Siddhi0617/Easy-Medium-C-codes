#include<stdio.h>
#include<string.h>

int main()
 {
    char speed[10];
    printf("Enter fan speed(LOW/HIGH): ");
    scanf("%s", speed);

    if(strcmp(speed, "LOW") == 0)
        printf("Fan speed set to LOW.\n");
    else if(strcmp(speed, "HIGH") == 0)
        printf("Fan speed set to HIGH.\n");
    else
        printf("Invalid speed!\n");

}
