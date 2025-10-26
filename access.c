#include <stdio.h>
int main()
 {
    int code;
    printf("Enter access code: ");
    scanf("%d", &code);
    switch(code)
     {
        case 1: printf("Admin Access.\n"); break;
        case 2: printf("User Access.\n"); break;
        case 3: printf("Guest Access.\n"); break;
        default: printf("Access Denied.\n");
    }
    return 0;
}
