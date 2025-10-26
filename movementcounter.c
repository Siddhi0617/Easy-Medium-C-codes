#include <stdio.h>
int main() 
{
    int steps, i;
    printf("Enter number of steps: ");
    scanf("%d", &steps);
    for(i=1; i<=steps; i++)
        printf("Step %d completed.\n", i);
    printf("Movement finished.\n");
    return 0;
}
