#include <stdio.h>
int main() 
{
    int n, i;
    float num, sum = 0, avg;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
    {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    
}
