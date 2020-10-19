#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 2

struct Employee
{
    bool Filled;
    int ID;
    int Age;
    double Salary;

} emp[SIZE];

int main(void)
{
    int option = 0;
    bool exit = false;

    printf("---=== EMPLOYEE DATA ===---\n\n");
    do
    {
        printf("1. Display Employee Information\n");
        printf("2. Add Employee\n");
        printf("0. Exit\n\n");

        printf("Please select from the above options: ");
        scanf("%d", &option);
        printf("\n");

        switch (option)
        {
        default:
            break;
        case 1:
            printf("EMP ID\tEMP AGE\tEMP SALARY\n");
            printf("======\t=======\t==========\n");

            for (int i = 0; i < SIZE; i++)
                printf("%6d%9d%11.2lf\n", emp[i].ID, emp[i].Age, emp[i].Salary);

            printf("\n");
            break;
        case 2:

            printf("Adding Employee\n");
            printf("===============\n");

            if (emp[0].Filled && emp[1].Filled)
                printf("ERORR!!! Maximum Number Of Employees Reached\n\n");
            else
            {
                for (int i = 0; i < SIZE; i++)
                {
                    if (emp[0].Filled)
                        i++;

                    printf("Enter Employee ID: ");
                    scanf("%d", &emp[i].ID);
                    printf("Enter Employee Age: ");
                    scanf("%d", &emp[i].Age);
                    printf("Enter Employee Salary: ");
                    scanf("%lf", &emp[i].Salary);
                    emp[i].Filled = true;
                    printf("\n");
                    break;
                }
            }

            break;
        case 0:
            printf("Exiting Employee Data Program. Good Bye!!!");
            exit = true;
            break;
        }
    } while (!exit);

    return 0;
}