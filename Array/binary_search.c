#include<stdio.h>

int main() {
    
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30;
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // find middle index

        if (arr[mid] == key) {
            printf("Element found at index %d", mid);
            return 0;
        }
        if (arr[mid] < key) {  // search in the right half
            low = mid + 1;
        }
        else {
            high = mid - 1;  // search in the left half
        }
    }

    printf("Element not found");

    return 0;
}