#include<stdio.h>

void main()
 {
    float sub1, sub2, sub3, sub4, sub5, average;
   
    printf("Enter marks for Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter marks for Subject 4: ");
    scanf("%f", &sub4);

    printf("Enter marks for Subject 5: ");
    scanf("%f", &sub5);

    average = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    printf("Average Marks = %.2f\n", average);

}