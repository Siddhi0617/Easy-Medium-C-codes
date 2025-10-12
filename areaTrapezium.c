#include<stdio.h>
int main ()
{
    float a,b,h,area;
    printf("enter length of first parallel side",a);
    scanf("%f",&a);
    printf("enter length of second parallel side",b);
    scanf("%f,",&b);
    printf("enter height of trapezium",h);
    scanf("%f",&h);
    area = 0.5  * (a + b) * h ;
    printf("area=%f",area);
}