#include <stdio.h>
struct Date
{
    int d,m,y;
};
struct Student
{
    int id;
    char name[20];
    struct Date dob;
};
int main()
{
    struct Student s;
    printf("Enter id name date month year: ");
    scanf("%d%s%d%d%d",&s.id,s.name,&s.dob.d,&s.dob.m,&s.dob.y);
    printf("Student: %d %s DOB: %d/%d/%d",s.id,s.name,s.dob.d,s.dob.m,s.dob.y);
    return 0;
}
