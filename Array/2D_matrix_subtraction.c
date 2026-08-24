#include<stdio.h>

int main() {
    
    int a[2][2] = {{10, 20}, {30, 40}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int sub[2][2];

    // Traverse each row
    for (int i = 0; i < 2; i++) {
        // Traverse each column 
        for (int j = 0; j < 2; j++) {

            // Subtraction corresponding elements
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    // Print the resultant matrix
    printf("Sub of array: \n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}