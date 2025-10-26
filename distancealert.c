#include <stdio.h>
int main() 
{
    int d;
    printf("Enter distance: ");
    scanf("%d", &d);
    if(d < 10) printf("Stop! Too close.\n");
    else if(d < 30) printf("Slow down.\n");
    else printf("Safe distance.\n");
    return 0;
}
