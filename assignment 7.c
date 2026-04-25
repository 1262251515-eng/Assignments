#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[5];
    int total;
    float percentage;
};

int main() {
    struct Student s[3];   // array of structures
    int i, j;

    // Input details
    for(i = 0; i < 3; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;

        printf("Enter marks of 5 subjects:\n");
        for(j = 0; j < 5; j++) {
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 5.0;
    }

    // Display details
    printf("\n--- Student Results ---\n");
    for(i = 0; i < 3; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal: %d", s[i].total);
        printf("\nPercentage: %.2f", s[i].percentage);

        if (s[i].percentage >= 75)
            printf("\nResult: Distinction");
        else if (s[i].percentage >= 60)
            printf("\nResult: First Class");
        else if (s[i].percentage >= 50)
            printf("\nResult: Second Class");
        else if (s[i].percentage >= 35)
            printf("\nResult: Pass");
        else
            printf("\nResult: Fail");

        printf("\n----------------------");
    }

    return 0;
}
