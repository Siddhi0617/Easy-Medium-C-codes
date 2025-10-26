#include <stdio.h>
int main() 
{
    char s[100];
    int spaces=0, digits=0, letters=0;
    printf("Enter text: ");
    scanf(" %[^\n]", s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ') spaces++;
        else if(s[i]>='0'&&s[i]<='9') digits++;
        else if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) letters++;
    }
    printf("Letters=%d Digits=%d Spaces=%d",letters,digits,spaces);
    return 0;
}
