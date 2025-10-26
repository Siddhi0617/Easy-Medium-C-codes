#include <stdio.h>
int main()
 {
    float d, t;
    printf("Enter distance (m): ");
    scanf("%f", &d);
    printf("Enter time (s): ");
    scanf("%f", &t);
    printf("Average Speed = %.2f m/s\n", d/t);
    return 0;
}
