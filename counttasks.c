#include <stdio.h>
int main() 
{
    int tasks, i;
    printf("Enter number of tasks: ");
    scanf("%d", &tasks);
    for(i=1; i<=tasks; i++)
    printf("Task %d Completed.\n", i);
    printf("All tasks done!\n");
    return 0;
}
