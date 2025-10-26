#include <stdio.h>
int main() 
{
    int sleep;
    printf("Enter 1 to Sleep, 0 to Wake: ");
    scanf("%d", &sleep);
    if(sleep == 1)
        printf("Robot entering Sleep Mode\n");
    else
        printf("Robot Active and Awake\n");
    return 0;
}
