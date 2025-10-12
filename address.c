#include<stdio.h>
void main() 
{
    char a[20],b[20],c[20];
    printf("Enter your city:");
    scanf("%s",a);
    printf("Enter your state:");
    scanf("%s",b);
    printf("Enter your country:");
    scanf("%s",c);
    printf("Your Address: %s, %s, %s",a,b,c);
}