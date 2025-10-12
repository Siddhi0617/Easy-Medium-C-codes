#include <stdio.h>

void main() 
{
    int level;

    printf("Enter water level : ");
    scanf("%d", &level);
    if (level >= 95)
     {
        printf("Status: Overflow! Stop the pump.\n");
    }
    else if (level >= 50) 
    {
        printf("Status: Water level is normal.\n");
    }
    else 
    {
        printf("Status: Water low! Start the pump.\n");
    }

   
}