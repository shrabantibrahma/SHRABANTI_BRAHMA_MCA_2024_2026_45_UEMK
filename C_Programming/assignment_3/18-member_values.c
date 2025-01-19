#include <stdio.h>
struct company
{
    char name[100];
    char address[100];
    char phone[15];
    int noOfEmployees;
};

int main()
{
    struct company comp;

    printf("Enter company name: ");
    scanf("%s", comp.name);
    printf("Enter company address: ");
    scanf("%s", comp.address);
    printf("Enter company phone number: ");
    scanf("%s", comp.phone);
    printf("Enter number of employees: ");
    scanf("%d", &comp.noOfEmployees);

    printf("Company Details:\n");
    printf("Name: %s\n", comp.name);
    printf("Address: %s\n", comp.address);
    printf("Phone: %s\n", comp.phone);
    printf("Number of Employees: %d\n", comp.noOfEmployees);

    return 0;
}