/* Write a program to calculate the sum of all elements in an integer array of size 5 initialized with 
values {10, 20, 30, 40, 50}.*/

#include <stdio.h>

int main() {
    int values[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += values[i]; 
    }

    printf("The sum is: %d\n", sum);
    
    return 0;
}