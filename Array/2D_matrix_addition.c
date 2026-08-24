#include<stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];

    // Traverse each row
    for (int i = 0; i < 2; i++) {
        // Traverse each column
        for (int j = 0; j < 2; j++) {

            // Add corresponding elements
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // Print resultant matrix
    printf("Sum of matrices:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}