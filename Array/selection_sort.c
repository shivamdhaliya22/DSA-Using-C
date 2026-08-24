#include<stdio.h>

int main() {
    
    int arr[5] = {5, 2, 3, 8, 1};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // assume current position has the min element

        for (int j = i + 1; j < n; j++) {  // Find smallest element in the unsorted array part
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap min element with current element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    // Print sorted array
    printf("Sorted array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}