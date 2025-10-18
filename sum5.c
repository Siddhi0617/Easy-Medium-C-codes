#include <stdio.h>
int sumReadings(int readings[], int n) 
{
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += readings[i];
    return sum;
}

int main() 
{
    int readings[5];
    printf("Enter 5 readings: ");
    for(int i=0; i<5; i++)
        scanf("%d", &readings[i]);
    printf("Total Sum = %d\n", sumReadings(readings, 5));
    return 0;
}
