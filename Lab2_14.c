#include <stdio.h>

float factorial(float n);
float power(float n, float step);

int main(void) {
    const float epsilon= 0.00001;
    const int max_iteration = 100;
    double sum=0;
    float temp;

    float k=1;
    do {
        temp = (factorial(k+1)) / (power(2,k) * factorial(k));
        sum+=temp;
        k++;
        printf("%lf, element %f\n", sum,k-1);
    }
    while (temp>=epsilon && k<=max_iteration);


    return 0;
}

float power(const float n, const float step) {
    float result = n;
    if (step==0){ return 1; }
    if (n==0) { return 0; }
    if (step==1) { return n; }
    for (int i=1; i<step; i++) {
        result*=n;
    }
    return result;
}

float factorial(const float n) {
    if (n == 0 || n==1) { return 1; }
    return n * factorial(n-1);
}