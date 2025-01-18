#include <stdio.h>
struct student
{
    int rollNo;
    char name[100];
    char address[100];
    int age;
    int marks;
};

void display(struct student s)
{
    printf("Roll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Address: %s\n", s.address);
    printf("Age: %d\n", s.age);
    printf("Marks: %d\n", s.marks);
}

int main()
{
    struct student students[12];

    for (int i = 0; i < 12; i++)
    {
        printf("Enter details of student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 12; i++)
    {
        display(students[i]);
        printf("\n");
    }

    return 0;
}