#include <stdio.h>
int main() 
{
    float side, volume;
    printf("Enter side of cube: ");
    scanf("%f", &side);
    volume = side * side * side;
    printf("Volume of Cube = %.2f\n", volume);
    
}
