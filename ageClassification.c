#include <stdio.h>

int main() 
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 12)
     {
        printf("Age group : Child\n");
    }
    else if (age <= 19)
     {
        printf("Age group : Teenager\n");
    }
    else if (age <= 59) 
    {
        printf("Age group : Adult\n");
    }
    else 
    {
        printf("Age group : Senior\n");
    }

    return 0;
}