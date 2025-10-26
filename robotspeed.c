#include <stdio.h>
int main() 
{
    int speed;
    printf("Enter robot speed (1-3): ");
    scanf("%d", &speed);
    switch(speed)
     {
        case 1: printf("Speed: LOW\n"); break;
        case 2: printf("Speed: MEDIUM\n"); break;
        case 3: printf("Speed: HIGH\n"); break;
        default: printf("Invalid speed level!\n");
    }
    return 0;
}
