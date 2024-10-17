#include <stdio.h>

int main() {
    float mark1, mark2, mark3, total, percentage;
    char grade;
    int pass = 1;  
    
    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &mark1, &mark2, &mark3);

    if (mark1 < 40 || mark2 < 40 || mark3 < 40) {
        pass = 0;  
    }

    total = mark1 + mark2 + mark3;
    percentage = total / 3.0;

    if (percentage >= 85) {
        grade = 'A';
    } else if (percentage >= 75) {
        grade = 'B';
    } else if (percentage >= 60) {
        grade = 'C';
    } else if (percentage >= 40) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    if (pass) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }

    return 0;
}
