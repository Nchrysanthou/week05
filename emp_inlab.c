#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define SIZE 2

struct Employee
{
    int id;
    int age;
    double salary;
} emp[SIZE] = {0};

int main(void)
{

    bool complete = false;
    int numEmployees = 0;
    int option = 0, i = 0;

    printf("---=== EMPLOYEE DATA ===---\n\n");

    do
    {
        printf("1. Display Employee Information\n");
        printf("2. Add Employee\n");
        printf("0. Exit\n\n");

        printf("Please select from the above options: ");
        scanf("%d", &option);

        switch (option)
        {

        default: // Unknown entry
            break;

        case 0: // Exit
            printf("Exiting Employee Data Program. Good Bye!!!");
            complete = true;
            break;

        case 1: // Display Function
            for (int i = 0; i < sizeof(emp); i++)
                printf("%6d%9d%11.2lf", emp[i].id, emp[i].age, emp[i].salary);
            printf("\n");
            break;
        case 2: // Add Employee
        {
            if (i >= sizeof(emp))
                printf("ERROR!!! Maximum Number Of Employees Reached");

            while (i <= SIZE)
            {
                printf("Adding Employee\n");
                printf("===============\n");
                printf("Enter Employee ID: ");
                scanf("%d", &emp[i].id);
                printf("Enter Employee Age: ");
                scanf("%d", &emp[i].id);
                printf("Enter Employee Salary: ");
                scanf("%.2lf", &emp[i].id);
                i++;
                printf("%d", emp[i]);
            }
        }
        break;
        }

    } while (!complete);

    return 0;
}