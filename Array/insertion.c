#include<stdio.h>

int main() {
    int arr[10] = {10,20,30,40,50};
    int n = 5;
    int pos = 3, val = 25;
    int i;

    printf("Array before insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // insertion
   
     for (i = n; i >= pos; i--) {
         arr[i] = arr[i-1];
     }
         arr[pos-1] = val;
         n++;

      printf("Array after insertion: ");
     for (i = 0; i < n; i++) {
         printf("%d ", arr[i]);
     } 
    return 0;
}