#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;
    char gender;

    printf("Enter Name: ");
    scanf("%s", name); // Reads one word (no spaces)

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Height (e.g. 5.9): ");
    scanf("%f", &height);

    printf("Enter Gender (M/F): ");
    scanf(" %c", &gender); // The space before %c consumes extra newlines

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Gender: %c\n", gender);

    return 0;
}