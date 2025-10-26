#include <stdio.h>
int main() 
{
    float current;
    printf("Enter motor current (A): ");
    scanf("%f", &current);
    if(current < 1.0)
        printf("Current Normal.\n");
    else if(current <= 3.0)
        printf("Moderate Load.\n");
    else
        printf("Overcurrent Warning!\n");
    return 0;
}
