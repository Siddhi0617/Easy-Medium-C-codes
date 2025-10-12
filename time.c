#include<stdio.h>
void main() 
{
    int a,b,c;
    printf("Enter hours:");
    scanf("%d",&a);
    printf("Enter minutes:");
    scanf("%d",&b);
    printf("Enter seconds:");
    scanf("%d",&c);
    printf("Time is: %02d:%02d:%02d",a,b,c);

}