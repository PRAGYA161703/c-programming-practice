// Write a while loop that calculates the sum of all odd numbers between 1 and 15.
#include<stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    while (i <= 15) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    printf("The sum of all odd numbers between 1 and 15 is: %d\n", sum);
    return 0;
}