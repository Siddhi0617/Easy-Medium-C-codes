#include <stdio.h>
int main() 
{
    int light;
    printf("Enter light level : ");
    scanf("%d", &light);
    if(light < 40)
        printf("Turning ON light.\n");
    else
        printf("Turning OFF light.\n");
    return 0;
}
