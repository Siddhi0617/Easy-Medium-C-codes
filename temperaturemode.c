#include <stdio.h>
int main()
{
    float temp;
    printf("Enter temperature: ");
    scanf("%f", &temp);
    if(temp < 0) 
        printf("Freezing Mode\n");
    else if(temp <= 40) 
        printf("Normal Operating Mode\n");
    else 
        printf("Overheat Warning!\n");
    return 0;
}
