#include <stdio.h>
int main() 
{
    int i, n, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2)
     {
        sum += i;
    }
    printf("Sum of Even Numbers = %d\n", sum);
    
}
