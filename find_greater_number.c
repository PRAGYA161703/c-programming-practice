// compare the value num1 and num2 and find out whether a num1 is greater than num2 or not.
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("num1 is greater than num2.\n");
    } else {
        printf("num1 is not greater than num2.\n");
    }

    return 0;
}