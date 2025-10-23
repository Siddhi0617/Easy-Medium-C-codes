#include<stdio.h>
#include<string.h>
int main()
{
    char command[10];
    printf("Enter magnet state: ");
    scanf("%s", command);
    if(strcmp(command, "ON") == 0)
        printf("Magnet energized.\n");
    else if(strcmp(command, "OFF") == 0)
        printf("Magnet de-energized.\n");
    else
        printf("Invalid magnet state!\n");
}
