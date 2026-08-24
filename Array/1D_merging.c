#include<stdio.h>

int main() {
    int a[] = {10,20,30,40,50};
    int b[] = {50,60,70};
    int c[10];
    int i;

    for (i = 0; i < 4; i++)
        c[i] = a[i];

    for (i = 0; i < 3; i++)
        c[4+i] = b[i];

    printf("Merged Array: ");

    for (i = 0; i < 7; i++)
        printf("%d ", c[i]);

    

    return 0;
}