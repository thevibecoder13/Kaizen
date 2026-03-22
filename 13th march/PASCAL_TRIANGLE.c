#include <stdio.h>

int main() {
    int num,n,k;
    printf("Enter number of rows: ");
    scanf("%d", &num);

    for (n = 0; n < num; n++){
        for (int i = 0; i < num - n; i++) {
            printf(" ");
        }
        long long val = 1;
        for (k = 0; k <= n; k++) {
            printf("%lld ", val);
            // C(n, k+1) = C(n, k) * (n-k)/(k+1)
            val = val * (n - k) / (k + 1);
        }
        printf("\n");
    }return 0;
}