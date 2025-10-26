#include <stdio.h>
int main() 
{
    int humidity;
    printf("Enter humidity value (0–100): ");
    scanf("%d", &humidity);
    if(humidity < 30)
        printf("Dry Condition.\n");
    else if(humidity <= 60)
        printf("Normal Humidity.\n");
    else
        printf("High Humidity Alert!\n");
    return 0;
}
