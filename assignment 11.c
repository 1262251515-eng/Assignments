#include <stdio.h>
#include <math.h>

int main() {
    int num, i;
    long long fact = 1;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Square
    printf("Square = %d\n", num * num);

    // Square Root
    printf("Square Root = %.2f\n", sqrt(num));

    // Prime Check
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    // Factorial
    if (num < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial = %lld\n", fact);
    }

    return 0;
}
