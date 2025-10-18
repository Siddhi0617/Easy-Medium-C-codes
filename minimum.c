#include <stdio.h>
int findMin(int readings[], int n)
 {
    int min = readings[0];
    for(int i=1; i<n; i++)
        if(readings[i] < min)
            min = readings[i];
    return min;
}

int main() 
{
    int readings[5];
    printf("Enter 5 readings: ");
    for(int i=0; i<5; i++)
        scanf("%d", &readings[i]);
    printf("Minimum = %d\n", findMin(readings, 5));
    return 0;
}
