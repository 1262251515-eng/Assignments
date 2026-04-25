#include <stdio.h>

int main() {
    int a = 10, b = 20, temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d, b = %d", a, b);

    return 0;
}

#include <stdio.h>

// Function using pointers
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;

    swap(&a, &b);   // passing addresses

    printf("After swapping:\n");
    printf("a = %d, b = %d", a, b);

    return 0;
}
