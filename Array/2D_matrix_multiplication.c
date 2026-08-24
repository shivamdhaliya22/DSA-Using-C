#include<stdio.h>

int main() {
    
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {6, 7}};
    int mul[2][2] = {0};

    // Traverse rows of first matrix
    for (int i = 0; i < 2; i++) {
        // Traverse columns of second matrix
        for (int j = 0; j < 2; j++) {
            // Calculate each element of result matrix
            for (int k = 0; k < 2; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the reultant matrix
    printf("Multiplication of matrix:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}