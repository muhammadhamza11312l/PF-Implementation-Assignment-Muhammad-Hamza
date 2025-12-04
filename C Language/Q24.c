#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float average;

    printf("Enter marks for 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    // Divide by 5.0 to ensure decimal division
    average = total / 5.0; 

    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}