#include <stdio.h>

// Function to find the largest element
int getMax(int a[], int n) {
    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

// Function to perform Counting Sort for each digit
void countingSort(int a[], int n, int exp) {
    int output[100];
    int count[10] = {0};

    // Count the occurrence of each digit
    for (int i = 0; i < n; i++) {
        int digit = (a[i] / exp) % 10;
        count[digit]++;
    }

    // Calculate the position of each digit
    for (int i = 1; i < 10; i++) {
        count[i] = count[i] + count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        int digit = (a[i] / exp) % 10;

        output[count[digit] - 1] = a[i];
        count[digit]--;
    }

    // Copy output back to original array
    for (int i = 0; i < n; i++) {
        a[i] = output[i];
    }
}

// Function to perform Radix Sort
void radixSort(int a[], int n) {
    // Find the largest element
    int max = getMax(a, n);

    // Sort according to each digit
    // exp = 1 → units
    // exp = 10 → tens
    // exp = 100 → hundreds
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(a, n, exp);
    }
}

int main() {
    int a[100], n;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Call Radix Sort
    radixSort(a, n);

    // Display sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}