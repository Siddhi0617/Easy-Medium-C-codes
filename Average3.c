#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three no.: ");
    scanf("%d %d %d",&a,&b,&c);
    
    int avg=(a+b+c)/3;
    printf("Average=%d",avg);
}