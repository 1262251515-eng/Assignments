#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], sub[10][10], mul[10][10];
    int r, c, i, j, k;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Addition & Subtraction
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    // Multiplication
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            mul[i][j] = 0;
            for(k = 0; k < c; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display results
    printf("\nAddition:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplication:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
