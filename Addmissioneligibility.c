#include<stdio.h>

void main() 
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 60) 
    {
        printf("You are eligible for admission.\n");
    } 
    else
     {
        printf("You are NOT eligible for admission.\n");
    }

}