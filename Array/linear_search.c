#include<stdio.h>

int main() {
    
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30, found = 0;

    // Traverse the array
    for (int i = 0; i < n; i++) {

        // Check if current element matches the key
        if (arr[i] == key) {
            printf("Element found at index %d", i);
            found = 1;

            break;
        }
    }
    if (found == 0) {
        printf("Element not found");
    }

    return 0;
}