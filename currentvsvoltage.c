#include <stdio.h>
int main() 
{
    float v, i;
    printf("Enter voltage: ");
    scanf("%f", &v);
    printf("Enter current: ");
    scanf("%f", &i);
    printf("Power = %.2f W\n", v * i);
    return 0;
}
