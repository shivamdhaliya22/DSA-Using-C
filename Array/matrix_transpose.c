#include<stdio.h>

int main() {
    
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int trans[3][2];

    // Traverse the original matrix
    for (int i = 0; i < 2; i++) {
        // Traverse each column
        for (int j = 0; j < 3; j++) {
        // Convert rows int columns
            trans[j][i] = a[i][j];
        }
    }

    // Print transpose matrix
    printf("Transpose matrix:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}