// Create an array of 6 integers and write a function to find and return the maximum value. 
#include<stdio.h>
int findMax(int arr[], int size);
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int numbers[6] = {10, 20, 30, 40, 50, 60};
    printf("The maximum value is: %d\n", findMax(numbers, 6));
    return 0;
}