// write a program to take 2 input from user first name and last name and show in single line.
#include <stdio.h>
int main() {
    char first_name[50], last_name[50];

    printf("Enter your first name: ");
    scanf("%s", first_name);

    printf("Enter your last name: ");
    scanf("%s", last_name);

    printf("Full Name: %s %s\n", first_name, last_name);
    return 0;
}