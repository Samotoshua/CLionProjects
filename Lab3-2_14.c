#include <stdio.h>
#include <math.h>

double avgGeometric(double n,int step);

int main() {
    const int A[5][5]={
        1,2,3,4,5,
        6,7,8,9,10,
        11,12,13,14,15,
        16,17,18,19,20,
        21,22,23,24,25
    };

    double result=1;
    int elements=0;

    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            if (i%2==0 && j%2!=0) {
                if (A[i][j]>0){
                    // printf("%d ",A[i][j]);
                    result*=A[i][j];
                    // printf("%lf ",result);
                    elements++;
                }
            }
        }
        printf("\n");
    }
    printf("%d, %lf\n",elements, result);
    printf("%lf\n",avgGeometric(result,elements));
    return 0;
}

double avgGeometric(const double n,const int step) {
    return pow(n,1.0/step);
}