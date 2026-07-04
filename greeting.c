// Create a switch statement that takes a character grade ('A', 'B', 'C', 'D', 'F') and prints a message based on the grade: 

#include <stdio.h>

int main() {
    char grade;

    printf("Enter the student's grade: ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Well done.\n");
            break;
        case 'D':
            printf("You passed.\n");
            break;
        case 'F':
            printf("Better luck next time.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;
}