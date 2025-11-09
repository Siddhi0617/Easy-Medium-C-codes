#include <stdio.h>
int main() 
{
    int n, i, pos = 0, neg = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0)
            pos++;
        else
            neg++;
    }
    printf("Positive: %d\nNegative: %d", pos, neg);
    return 0;
}
