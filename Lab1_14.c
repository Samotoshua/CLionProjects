#include <stdio.h>

int main(void) {
    int n, dobutok=1;
    printf("Enter a number: \n");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        if (i%19==0) {
            if (i%4!=0){
                dobutok*=i;
                printf("%d is divisible to 19 and not 4\n", i);
            }
        }
    }
    printf("%d\n", dobutok);
    return 0;
}
