#include <stdio.h>

float average(float a, float b, float c)
 {
    return (a + b + c) / 3;
}

int main() 
{
    float x, y, z;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &x, &y, &z);

    printf("Average = %.2f", average(x, y, z));

}
