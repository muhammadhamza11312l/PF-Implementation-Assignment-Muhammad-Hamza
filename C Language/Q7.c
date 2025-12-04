#include <stdio.h>

int main() {
    // Variable Declaration
    int roll_number;
    int marks_pf, marks_ic, marks_cg; // PF: Prog Fundamentals, IC: Intro Computing, CG: Comp Graphics
    int total_score;
    float average_score;

    // Input: Roll No
    printf("Enter Student Roll No: ");
    scanf("%d", &roll_number);

    // Input: Marks for three subjects
    printf("Enter marks for Programming Fundamentals: ");
    scanf("%d", &marks_pf);

    printf("Enter marks for Introduction to Computing: ");
    scanf("%d", &marks_ic);

    printf("Enter marks for Computer Graphics: ");
    scanf("%d", &marks_cg);

    // Calculation
    total_score = marks_pf + marks_ic + marks_cg;
    
    // Divide by 3.0 to force floating-point division
    average_score = total_score / 3.0;

    // Output
    printf("\n--- Result for Roll No: %d ---\n", roll_number);
    printf("Total Marks: %d / 300\n", total_score);
    printf("Average Marks: %.2f\n", average_score);

    return 0;
}