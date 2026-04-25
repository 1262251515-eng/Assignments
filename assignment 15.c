#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;

    // Seed the random number generator
    srand(time(0));

    printf("Pseudo Random Numbers:\n");

    for(i = 1; i <= 5; i++) {
        printf("%d\n", rand());   // generate random number
    }

    return 0;
}
