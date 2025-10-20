#include <stdio.h>
int isConstant(int readings[], int n) 
{
    for(int i=1;i<n;i++)
        if(readings[i]!=readings[0])
            return 0;
    return 1;
}

int main() 
{
    int readings[5];
    printf("Enter 5 readings: ");
    for(int i=0;i<5;i++) scanf("%d",&readings[i]);
    if(isConstant(readings,5))
        printf("All readings are constant\n");
    else
        printf("Readings are not constant\n");
    return 0;
}
