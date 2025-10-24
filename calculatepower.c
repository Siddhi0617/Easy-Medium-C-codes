#include <stdio.h>
int main()
{
    int a,b,pow=1;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
        pow*=a;
    printf("Result=%d",pow);
    
}
