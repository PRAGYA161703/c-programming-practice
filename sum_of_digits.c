#include<stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int sum = 0;
    int digit;
    while(n != 0) {
        digit = n % 10;
        sum += digit;
        n = n/10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
