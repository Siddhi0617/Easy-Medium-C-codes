#include <stdio.h>
int main()
 {
    float a1, a2, total;
    printf("Enter base angle: ");
    scanf("%f", &a1);
    printf("Enter joint angle: ");
    scanf("%f", &a2);
    total = a1 + a2;
    printf("Total arm angle = %.2f°\n", total);
    return 0;
}
