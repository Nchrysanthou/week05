#include <stdio.h>
#include <stdbool.h>

#define SIZE 2

struct Employee
{
    int id = 0;
    int age = 0;
    double salary = 0.00;
} emp[SIZE];

enum Options
{
    displayInformation = 1,
    addEmployee = 2,
    updateSalary = 3,
    removeEmployee = 4,
    exit = 0
} options;

int main(void)
{

    printf("---=== EMPLOYEE DATA ===---\n\n");

    switch (options)
    {
    case displayInformation:
        break;
    case addEmployee:
        break;
    case updateSalary:
        break;
    case removeEmployee:
        break;
    case exit:
        printf("Exiting Employee Data Program. Good Bye!!!");
        return 0;
    default:
        break;
    }
    return 0;
}