#include <stdio.h>
struct Student
{
    char name[20];
    int marks[3];
};
int main()
{
    struct Student s;
    printf("Enter name and 3 subject marks: ");
    scanf("%s%d%d%d",s.name,&s.marks[0],&s.marks[1],&s.marks[2]);
    int total=s.marks[0]+s.marks[1]+s.marks[2];
    printf("Name=%s Total=%d",s.name,total);
    return 0;
}
