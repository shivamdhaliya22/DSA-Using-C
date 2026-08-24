#include<stdio.h>

int main() {
   int arr[10] = {10,20,30,40,50};
    int n = 5;
    int key = 30;
    int i; 
    int pos = i+1;

    printf("Array : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // search loop 

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d. ", i+1);
        return 0;  // Element found at 3. , when key is 30
        }
    }
    
    printf("Element not found. ");
    return 0; // Element not found. , when key is not same as array element
}