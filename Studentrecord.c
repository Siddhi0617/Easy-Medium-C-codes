#include <stdio.h>
struct Student 
{
    char name[30];
    int roll;
    float marks;
};
int main()
 {
    struct Student s;
    FILE *fp;
    fp = fopen("student.txt", "w");
    printf("Enter name, roll number, marks: ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    fprintf(fp, "Name: %s\nRoll: %d\nMarks: %.2f", s.name, s.roll, s.marks);
    fclose(fp);
    printf("Record saved to file successfully!");
    return 0;
}
