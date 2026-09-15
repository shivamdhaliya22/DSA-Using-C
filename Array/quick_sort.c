#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to place pivot at its correct position
int partition(int a[], int low, int high) {
    int pivot = a[high];   // Choose last element as pivot
    int i = low - 1;
    int j;

    // Compare each element with pivot
    for (j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(&a[i], &a[j]);
        }
    }

    // Place pivot at its correct position
    swap(&a[i + 1], &a[high]);

    return i + 1;   // Return pivot index
}

// Function to perform Quick Sort
void quickSort(int a[], int low, int high) {
    if (low < high) {

        // Find pivot position
        int p = partition(a, low, high);

        // Sort elements before pivot
        quickSort(a, low, p - 1);

        // Sort elements after pivot
        quickSort(a, p + 1, high);
    }
}

int main() {
    int a[100], n, i;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Call Quick Sort
    quickSort(a, 0, n - 1);

    // Display sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}