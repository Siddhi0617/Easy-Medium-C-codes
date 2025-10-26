#include <stdio.h>
int main() 
{
    int time;
    printf("Enter time (24-hr format): ");
    scanf("%d", &time);
    if(time < 12)
        printf("Good Morning, User!\n");
    else if(time < 18)
        printf("Good Afternoon!\n");
    else
        printf("Good Evening!\n");
    return 0;
}
