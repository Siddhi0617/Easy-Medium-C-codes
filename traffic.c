#include<stdio.h>
#include<string.h>

int main() 
{
    char signal[10];
    printf("Enter signal color (RED/GREEN/YELLOW): ");
    scanf("%s", signal);

    if(strcmp(signal, "RED") == 0)
        printf("STOP!\n");
    else if(strcmp(signal, "GREEN") == 0)
        printf("GO!\n");
    else if(strcmp(signal, "YELLOW") == 0)
        printf("READY!\n");
    else
        printf("Invalid signal!\n");

}
