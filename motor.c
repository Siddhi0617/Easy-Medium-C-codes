#include<stdio.h>
#include<string.h>

int main() 
{
    char direction[10];
    printf("Enter motor direction (LEFT/RIGHT): ");
    scanf("%s", direction);

    if(strcmp(direction, "LEFT") == 0)
        printf("Motor rotating LEFT.\n");
    else if(strcmp(direction, "RIGHT") == 0)
        printf("Motor rotating RIGHT.\n");
    else
        printf("Invalid direction!\n");

}
