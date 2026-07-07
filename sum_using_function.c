// Write a function called sum that returns the sum of 3 values.
#include<stdio.h>

int sum(int a, int b, int c);

int sum(int a, int b, int c){
    return a+b+c;
}

int main() {
    int result = sum(5, 10, 15);
    printf("The sum is: %d\n", result);
    return 0;
}