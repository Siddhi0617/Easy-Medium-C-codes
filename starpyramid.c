#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter Rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-1;j++)
        printf(" ");
        for (k=1;k<=i;k++)
        printf("%d",i);
        printf("\n");
    }
}