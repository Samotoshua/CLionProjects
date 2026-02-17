#include <stdio.h>

int isPrime(int n);

int main() {
    int A[5][5]={
        1,2,3,4,5,
        6,7,8,9,10,
        11,12,13,14,15,
        16,17,18,19,20,
        21,22,23,24,25
    };

    int smallest = A[0][0];
    int biggest = A[0][0];
    int tempSmallElementRow=0;
    int tempBigElementRow=0;
    int tempArray[5];

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            if (A[i][j]<smallest && isPrime(A[i][j])) {
                smallest = A[i][j];
                tempSmallElementRow=i;
                break;
            }
            if (A[i][j]>biggest && isPrime(A[i][j])) {
                biggest = A[i][j];
                tempBigElementRow=i;
            }
        }
    }
    printf("Smallest prime number is: %d\n",smallest);
    printf("Biggest prime number is: %d\n",biggest);

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            tempArray[tempSmallElementRow]=A[tempBigElementRow][j];
            A[tempBigElementRow][j]=A[tempSmallElementRow][j];
            A[tempSmallElementRow][j]=tempArray[tempSmallElementRow];
        }
    }

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int isPrime(int n) {
    if (n<=1) return 0;
    if (n==2 || n==3) return 1;
    if (n%2==0 || n%3==0) return 0;
    for (int i=5;i*i<=n; i+=6) {
        if (n%i==0 || n%i+2==0) return 0;
    }
    return 1;
}