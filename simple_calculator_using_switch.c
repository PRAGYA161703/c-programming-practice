// Simple Calculator using Switch
#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter operator(+,-,x,/) : ");
    scanf(" %c",&op);

    switch(op) {
        case '+': printf("%d", a + b); break;
        case '-': printf("%d", a - b); break;
        case 'x': printf("%d", a * b); break;
        case '/': printf("%d", a / b); break;
        default: printf("Invalid");
    }

    return 0;
}
