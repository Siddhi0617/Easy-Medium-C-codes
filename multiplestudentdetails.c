#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct Student s[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter id name marks for student %d: ",i+1);
        scanf("%d%s%f",&s[i].id,s[i].name,&s[i].marks);
    }
    printf("\nStudent Details:\n");
    for(int i=0;i<3;i++)
        printf("%d %s %.2f\n",s[i].id,s[i].name,s[i].marks);
    return 0;
}
