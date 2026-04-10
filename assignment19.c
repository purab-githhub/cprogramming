#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];
    float salary;
};

int main() {
    int n, i, male = 0, female = 0, highSal = 0, asst = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: ");        scanf("%s", emp[i].name);
        printf("Designation: "); scanf("%s", emp[i].designation);
        printf("Gender: ");      scanf("%s", emp[i].gender);
        printf("DOJ: ");         scanf("%s", emp[i].doj);
        printf("Salary: ");      scanf("%f", &emp[i].salary);
    }

    for (i = 0; i < n; i++) {
        if (strcmp(emp[i].gender, "Male") == 0)   male++;
        else                                        female++;
        if (emp[i].salary > 10000)                 highSal++;
        if (strcmp(emp[i].designation, "Asst_Manager") == 0) asst++;
    }

    printf("\n--- Results ---\n");
    printf("a) Total Employees     : %d\n", n);
    printf("b) Male: %d, Female: %d\n", male, female);
    printf("c) Salary > 10,000     : %d\n", highSal);
    printf("d) Asst Managers       : %d\n", asst);

    return 0;
}