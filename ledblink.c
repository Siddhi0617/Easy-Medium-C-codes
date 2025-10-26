#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter number of blinks: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        printf("LED Blink %d\n", i);
    return 0;
}
