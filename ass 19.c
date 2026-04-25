#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee e[3];   // array of structures
    int i;

    // Input details
    for(i = 0; i < 3; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Department: ");
        scanf("%s", e[i].department);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    // Display details
    printf("\n--- Employee Details ---\n");
    for(i = 0; i < 3; i++) {
        printf("\nID: %d", e[i].id);
        printf("\nName: %s", e[i].name);
        printf("\nDepartment: %s", e[i].department);
        printf("\nSalary: %.2f", e[i].salary);
        printf("\n----------------------");
    }

    return 0;
}
