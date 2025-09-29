#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter rows:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            printf("%d",j/2);
            else printf("*");
        }
        printf("\n");
    }
}