#include <stdio.h>

// Recursive function
int factorial_rec(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_rec(n - 1);
}

int main() {
    int num, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Without recursion (loop)
    for (i = 1; i <= num; i++) {
        fact *= i;
    }
    printf("Factorial without recursion = %lld\n", fact);

    // With recursion
    printf("Factorial with recursion = %d\n", factorial_rec(num));

    return 0;
}
