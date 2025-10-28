#include <stdio.h>

int main()
 {
    float side, perimeter;

    printf("Enter the side of the equilateral triangle: ");
    scanf("%f", &side);

    perimeter = 3 * side;

    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}