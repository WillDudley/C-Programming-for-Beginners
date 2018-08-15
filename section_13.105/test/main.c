#include <stdio.h>
#include <stdlib.h>

/*
Create employee struct with name, hiredate and salary
Declare, initialise, print one
Read in another
Print
*/

struct Employee {
    char name[10];
    double hiredate;
    double salary;
    };

struct Employee * pEmployee = NULL;

struct Employee dave = {"Dave", 1997, 56000};

void printEmployeeData (struct Employee emp) {
    printf("Employee name: %s\n", emp.name);
    printf("Employee join date: %.0lf\n", emp.hiredate);
    printf("Employee salary: $%.2lf\n ---------------------- \n", emp.salary);
}

int main()
{
    printEmployeeData(dave);

    struct Employee newEmployee;
    pEmployee = &newEmployee;

    printf("Enter employee data: "); scanf("%s %lf %lf", pEmployee -> name, &(pEmployee -> hiredate), &(pEmployee -> salary));

    printEmployeeData(newEmployee);

}
