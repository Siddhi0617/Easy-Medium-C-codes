#include <stdio.h>
int main() 
{
    int task;
    printf("Select Task:\n1. Cleaning\n2. Delivery\n3. Surveillance\nEnter: ");
    scanf("%d", &task);
    switch(task)
     {
        case 1: printf("Cleaning Task Started\n"); break;
        case 2: printf("Delivery Task Initiated\n"); break;
        case 3: printf("Surveillance Mode Active\n"); break;
        default: printf("Invalid Task Selection\n");
    }
    return 0;
}
