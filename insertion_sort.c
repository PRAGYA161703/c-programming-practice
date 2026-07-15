// Write a function to sort numbers using insertion sort, add code to find the smallest number during sorting. 
#include <stdio.h>

void insertionSortAndFindMin(int arr[], int n) {
    
    int smallest = arr[0]; 

    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        
        if (key < smallest) {
            smallest = key;
        }
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = key;
    }

    
    printf("Smallest number in the array: %d\n", smallest);
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSortAndFindMin(arr, n);

    printf("Insertion Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}