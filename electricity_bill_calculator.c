// Calculate Electricity Bill
#include <stdio.h>

int main() {
    int units;
    float bill;
    
    printf("Enter units : ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 2;
    else
        bill = units * 3;

    printf("Bill = %.2f", bill);

    return 0;
}
