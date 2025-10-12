#include <stdio.h>

int main()
 {
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);


    printf("Your BMI is: %.2f\n", bmi);

    
    if (bmi < 18.5) 
    {
        printf("Status: Underweight\n");
    } else if (bmi < 25) 
    {
        printf("Status: Normal\n");
    } else 
    {
        printf("Status: Overweight\n");
    }

    return 0;
}