#include <stdio.h>
int findMax(int readings[], int n)
 {
    int max = readings[0];
    for(int i=1; i<n; i++)
        if(readings[i] > max)
            max = readings[i];
    return max;
}

int main()
 {
    int readings[5];
    printf("Enter 5 readings: ");
    for(int i=0; i<5; i++)
        scanf("%d", &readings[i]);
    printf("Maximum = %d\n", findMax(readings, 5));
    return 0;
}
