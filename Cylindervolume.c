#include <stdio.h>
int main()
 {
    float r, h, volume;
    printf("Enter radius and height of cylinder: ");
    scanf("%f %f", &r, &h);
    volume = 3.1416 * r * r * h;
    printf("Volume of Cylinder = %.2f\n", volume);
    
}
