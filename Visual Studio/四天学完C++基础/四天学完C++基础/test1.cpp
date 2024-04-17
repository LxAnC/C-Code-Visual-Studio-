#include <stdio.h>

int main() {
    int i, j, k, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2*(n-i); j++)
            printf(" ");
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (k = i - 1; k >= 1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}