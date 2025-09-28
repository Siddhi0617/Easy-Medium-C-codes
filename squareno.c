#include <stdio.h>
int main() 
{
    int i, n;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) 
    {
        printf("Square of %d = %d\n", i, i * i);
    }
    
}
