#include <stdio.h>
struct student
{
    int roll;
    char name[30];
    float marks;
};
int main()
{
    struct student s;
    printf("Enter roll: \nname: \nmarks: ");
    scanf("%d%s%f",&s.roll,s.name,&s.marks);
    printf("\nRoll:%d \nName:%s \nMarks:%.2f",s.roll,s.name,s.marks);
    return 0;
}
