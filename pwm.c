#include <stdio.h>

int main() 
{
    int dutyCycle, period;
    
    printf("Enter Duty Cycle: ");
    scanf("%d", &dutyCycle);
    printf("Enter Period: ");
    scanf("%d", &period);
    
    printf("PWM Simulation: ");
    
    for (int i = 0; i < period; i++) 
    {
        if (i < dutyCycle) 
        {
            printf("1 ");  // HIGH
        } else {
            printf("0 ");  // LOW
        }
    }
    
    
}
