#include <stdio.h>
int main()
 {
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Prime factors: ");
    for (i = 2; i <= n; i++) 
    {
        while (n % i == 0) 
        {
            printf("%d ", i);
            n /= i;
        }
    }
   
}
