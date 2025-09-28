#include <stdio.h>
void main()
 {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a > b) printf("%d is larger", a);
    else printf("%d is larger", b);
  
}