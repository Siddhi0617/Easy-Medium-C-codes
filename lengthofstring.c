#include <stdio.h>
int main()
{
    char str[50];
    int len=0;
    printf("Enter string: ");
    scanf("%s",str);
    while(str[len]!='\0') len++;
    printf("Length = %d",len);
    return 0;
}
