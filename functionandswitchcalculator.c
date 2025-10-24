#include <stdio.h>
float calc(int ch,float a,float b)
{
    switch(ch)
    {
        case 1: return a+b;
        case 2: return a-b;
        case 3: return a*b;
        case 4: return a/b;
        default: 
        return 0;
    }
}
int main()
{
    int ch;
    float a,b;
    printf("1.Add 2.Sub 3.Mul 4.Div: ");
    scanf("%d",&ch);
    printf("Enter a,b: ");
    scanf("%f%f",&a,&b);
    printf("Result=%.2f",calc(ch,a,b));
    return 0;
}
