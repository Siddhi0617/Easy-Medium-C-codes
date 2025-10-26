#include <stdio.h>
int main() 
{
    char pass[10];
    printf("Enter password: ");
    scanf("%s", pass);
    if(strcmp(pass, "robot123") == 0)
        printf("Access Granted\n");
    else
        printf("Access Denied\n");
    return 0;
}
