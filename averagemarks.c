#include <stdio.h>
struct Student
{
    int roll;
    float marks;
};
int main()
{
    struct Student s[5];
    float sum=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter roll & marks: ");
        scanf("%d%f",&s[i].roll,&s[i].marks);
        sum+=s[i].marks;
    }
    printf("Class Average = %.2f",sum/5);
    return 0;
}
