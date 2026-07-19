// ATM Withdrawal Check
#include <stdio.h>

int main() {
    int balance = 10000, amount;

    printf("Enter the amount : ");
    scanf("%d", &amount);

    if (amount <= balance)
        printf("Transaction Successful");
    else
        printf("Insufficient Balance");

    return 0;
}
