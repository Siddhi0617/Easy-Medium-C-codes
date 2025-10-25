#include <stdio.h>
int main()
{
    float temp;
    printf("Enter temperature: ");
    scanf("%f",&temp);
    if(temp>50)
        printf("Overheat,Shut down system.");
    else if(temp>30)
        printf("Temperature Normal");
    else
        printf("Too Cold Increase Power!");
    return 0;
}
