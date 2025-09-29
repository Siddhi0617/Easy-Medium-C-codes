#include <stdio.h>
void main()
 {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a < b)
        printf("%d is smaller\n", a);
    else if (b < a)
        printf("%d is smaller\n", b);
    else
        printf("Both are equal\n");
    
}
