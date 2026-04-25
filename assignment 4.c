#include <stdio.h>

int main() {
    float basic, hra, ta, gross, tax, net;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    // Allowances
    hra = 0.20 * basic;   // 20% HRA
    ta  = 0.10 * basic;   // 10% TA

    // Gross Salary
    gross = basic + hra + ta;

    // Tax (assume 5%)
    tax = 0.05 * gross;

    // Net Salary
    net = gross - tax;

    printf("\nHRA = %.2f", hra);
    printf("\nTA = %.2f", ta);
    printf("\nGross Salary = %.2f", gross);
    printf("\nTax = %.2f", tax);
    printf("\nNet Salary = %.2f", net);

    return 0;
}
