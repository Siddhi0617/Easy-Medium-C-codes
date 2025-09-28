#include <stdio.h>
void main()
 {
    int a, b, remainder;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (b != 0)
     {
        remainder = a % b;
        printf("Remainder = %d\n", remainder);
    } else {
        printf("Division by zero not allowed.\n");
    }
    
}
