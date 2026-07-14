// Modify the selection sort program to sort in descending order. 
#include <stdio.h>

void selectionSortDescending(int arr[], int n) {
    
    for (int i = 0; i < n - 1; i++) {
        
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }

        
        if (max_idx != i) {
            int temp = arr[max_idx];
            arr[max_idx] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSortDescending(arr, n);

    printf("Selection Sorted array (Descending): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}