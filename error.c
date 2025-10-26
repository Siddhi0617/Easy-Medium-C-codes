#include <stdio.h>
int main() 
{
    int code;
    printf("Enter error code (1to3): ");
    scanf("%d", &code);
    switch(code) 
    {
        case 1: printf("Error 1: Motor Fault\n"); break;
        case 2: printf("Error 2: Sensor Failure\n"); break;
        case 3: printf("Error 3: Power Loss\n"); break;
        default: printf("Unknown Error Code\n");
    }
    return 0;
}
