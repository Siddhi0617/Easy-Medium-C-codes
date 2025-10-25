#include <stdio.h>
struct Student
{
    char name[20];
    float marks;
};
int main()
{
    struct Student s;
    printf("Enter name and marks: ");
    scanf("%s%f",s.name,&s.marks);
    if(s.marks>=90) printf("%s Grade: A",s.name);
    else if(s.marks>=75) printf("%s Grade: B",s.name);
    else if(s.marks>=50) printf("%s Grade: C",s.name);
    else printf("%s Failed",s.name);
    return 0;
}
