#include <stdio.h>
int main() 
{
    int marks;
    printf("Enter marks (0 - 100): ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Grade: A+\n");
    else if (marks >= 75)
        printf("Grade: A\n");
    else if (marks >= 60)
        printf("Grade: B\n");
    else if (marks >= 40)
        printf("Grade: C\n");
    else
        printf("Grade: F (Fail)\n");

}
