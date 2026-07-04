// write a c program to calculate square of a number enterd by the user.
#include<stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int square = num * num;
    printf("The square of %d is %d\n", num, square);
    return 0;
}