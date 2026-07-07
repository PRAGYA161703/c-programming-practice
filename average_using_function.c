// Write a function called avg that print the average value of 5 number input from user . 
#include<stdio.h>

float avg(int a, int b, int c, int d, int e);

float avg(int a, int b, int c, int d, int e){
    return (float)(a+b+c+d+e)/5;
}

int main() {
    int n1, n2, n3, n4, n5;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Enter the third number: ");
    scanf("%d", &n3);
    printf("Enter the fourth number: ");
    scanf("%d", &n4);
    printf("Enter the fifth number: ");
    scanf("%d", &n5);
    float result = avg(n1, n2, n3, n4, n5);
    printf("The average is: %.2f\n", result);
    return 0;
}