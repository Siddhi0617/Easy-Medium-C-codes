#include<stdio.h>
#include<string.h>

int main()
 {
    char state[10];
    printf("Enter heater command (ON/OFF): ");
    scanf("%s", state);

    if(strcmp(state, "ON") == 0)
        printf("Heater turned ON.\n");
    else if(strcmp(state, "OFF") == 0)
        printf("Heater turned OFF.\n");
    else
        printf("Invalid command!\n");

}
