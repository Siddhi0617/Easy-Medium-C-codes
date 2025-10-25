#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter string: ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
        printf("%c = %d\n",str[i],str[i]);
    return 0;
}
