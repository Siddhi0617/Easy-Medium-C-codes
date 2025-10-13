#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    float arr[n], sum = 0;
    for(int i = 0; i < n; i++)
     {
        printf("Enter value %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    printf("Average = %.2f", sum / n);
    
}
