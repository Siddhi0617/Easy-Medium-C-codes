#include<stdio.h>
#include<string.h>

int main()
 {
    char movement[10];
    printf("Enter movement : ");
    scanf("%s", movement);

    if(strcmp(movement, "FORWARD") == 0)
        printf("Robot moving forward.\n");
    else if(strcmp(movement, "BACKWARD") == 0)
        printf("Robot moving backward.\n");
    else
        printf("Unknown movement!\n");

}
