#include <stdio.h>
void checkTrend(int readings[], int n) 
{
    int inc = 1, dec = 1;
    for(int i=1;i<n;i++)
     {
        if(readings[i] > readings[i-1]) dec = 0;
        if(readings[i] < readings[i-1]) inc = 0;
    }
    if(inc) printf("Readings are Increasing\n");
    else if(dec) printf("Readings are Decreasing\n");
    else printf("Not clear\n");
}

int main() 
{
    int readings[5];
    printf("Enter 5 readings: ");
    for(int i=0;i<5;i++) scanf("%d",&readings[i]);
    checkTrend(readings,5);
    return 0;
}
