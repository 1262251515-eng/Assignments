#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // Check fail condition (any subject < 35)
    if (m1 < 35 || m2 < 35 || m3 < 35 || m4 < 35 || m5 < 35) {
        printf("Result: FAIL");
    } else {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5.0;

        printf("Total = %d\n", total);
        printf("Percentage = %.2f\n", percentage);

        if (percentage >= 75) {
            printf("Result: DISTINCTION");
        } else if (percentage >= 60) {
            printf("Result: FIRST CLASS");
        } else if (percentage >= 50) {
            printf("Result: SECOND CLASS");
        } else {
            printf("Result: PASS");
        }
    }

    return 0;
}
