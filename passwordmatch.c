#include <stdio.h>
#include <string.h>

int main() {
    char pass1[20], pass2[20];
    printf("Enter password: ");
    scanf("%s", pass1);
    printf("Re-enter password: ");
    scanf("%s", pass2);

    if(strcmp(pass1, pass2)==0)
        printf("Password Match \n");
    else
        printf("Password Mismatch \n");

    return 0;
}

