#include <stdio.h>
int main() 
{
    int n, i, evenSum = 0, oddSum = 0;
    printf("Enter range: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) 
    {
        if(i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }
    printf("Sum of Even = %d\nSum of Odd = %d", evenSum, oddSum);
   
}
