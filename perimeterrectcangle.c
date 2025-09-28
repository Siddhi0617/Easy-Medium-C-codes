#include <stdio.h>
void main()
 {
    float l, b, peri;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    peri = 2 * (l + b);
    printf("Perimeter of Rectangle = %.2f\n", peri);
    
}
