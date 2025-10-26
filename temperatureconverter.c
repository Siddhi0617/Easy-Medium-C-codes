#include <stdio.h>
int main()
 {
    int ch;
    float t;
    printf("1.C to F\n2.F to C\nEnter choice: ");
    scanf("%d",&ch);
    printf("Enter temperature: ");
    scanf("%f",&t);
    switch(ch)
    {
        case 1: printf("F = %.2f",(t*9/5)+32); break;
        case 2: printf("C = %.2f",(t-32)*5/9); break;
        default: printf("Invalid");
    }
    return 0;
}
