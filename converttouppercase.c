#include <stdio.h>
#include <string.h>
int main() 
{
    char s[50];
    printf("Enter string: ");
    scanf("%s", s);
    for(int i=0;s[i]!='\0';i++)
        s[i]=toupper(s[i]);
    printf("Uppercase: %s", s);
    return 0;
}
