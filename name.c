#include<stdio.h>

void main()
{
    char name[50];

    printf("Enter your Name: ");

    fgets(name, sizeof(name), stdin);

    printf("Hello, %s", name);
}

