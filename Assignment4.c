/*Write a C Program to calculate the salary of an employee given his basic pay (taken as input from the user).
 Calculate gross salary of employee. Let HRA be 10 % of basic pay and TA be 5% of basic pay. 
 Let employees pay professional tax as 2% of  total salary. 
Calculate net salary payable after deductions.*/
#include <stdio.h>

void main() {

    float basic_salary, hra, ta, gross_salary, tax, net_salary;

    printf("enter basic_salary =");
    scanf("%f", &basic_salary);

    hra = basic_salary * 0.10;   // 10% HRA
    ta  = basic_salary * 0.05;   // 5% TA

    gross_salary = basic_salary + hra + ta;

    tax = gross_salary * 0.02;   // 2% professional tax

    net_salary = gross_salary - tax;

    printf("net salary =%f", net_salary);
}
