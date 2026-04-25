#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    while(str[length] != '\0') {
        length++;
    }
    printf("Length of string = %d\n", length);

    // Reverse string
    for(i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[i] = '\0';

    printf("Reversed string = %s", rev);

    return 0;
}
