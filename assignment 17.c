#include <stdio.h>

int main() {
    float x, term, sum;
    int n, i;
    int fact = 1;
    int sign = 1;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    sum = 0;

    for(i = 1; i <= n; i++) {
        fact = 1;

        // calculate factorial of (2*i - 1)
        for(int j = 1; j <= (2*i - 1); j++) {
            fact *= j;
        }

        term = sign * (pow(x, (2*i - 1)) / fact);
        sum += term;

        sign = -sign; // alternate sign
    }

    printf("Sum of sine series = %.4f", sum);

    return 0;
}
