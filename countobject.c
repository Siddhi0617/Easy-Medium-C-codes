#include <stdio.h>
int main() 
{
    int count;
    printf("Enter number of objects detected: ");
    scanf("%d", &count);
    printf("Total Objects: %d\n", count);
    if(count > 10)
        printf("Storage Full Warning!\n");
    return 0;
}
