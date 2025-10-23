#include <stdio.h>
int main()
 {
    int n, i, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factors: ");
    for(i = 1; i <= n; i++) 
    {
        if(n % i == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    if(count == 2)
        printf("Prime number");
    else
        printf("Not a prime number");
    return 0;
}
