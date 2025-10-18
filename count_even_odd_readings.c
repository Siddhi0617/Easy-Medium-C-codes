#include <stdio.h>
void countEvenOdd(int readings[], int n, int *even, int *odd) 
{
    *even = *odd = 0;
    for(int i=0;i<n;i++) 
    {
        if(readings[i]%2==0) (*even)++;
        else (*odd)++;
    }
}

int main()
 {
    int readings[5], even, odd;
    printf("Enter 5 readings: ");
    for(int i=0;i<5;i++)
        scanf("%d",&readings[i]);
    countEvenOdd(readings,5,&even,&odd);
    printf("Even=%d  Odd=%d\n", even, odd);
    return 0;
}
