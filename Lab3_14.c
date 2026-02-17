#include <stdio.h>

int main() {
    int A[5];
    int B[5];
    printf("Enter 5 numbers\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (A[i]<0) {
            B[i] = A[i]*A[i];
        }
        else {
            B[i] = 0;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}