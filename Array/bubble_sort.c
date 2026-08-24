#include<stdio.h>

int main() {
    
    int arr[] = {5, 2, 8, 1, 3};
    int n = 5;

    // Repeated passes through the array
    for (int i = 0; i < n - 1; i++) {

        // Compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}