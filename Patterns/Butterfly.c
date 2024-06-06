#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Upper half of the butterfly
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        for (int j = 1; j <= 2 * n - 2 * i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half of the butterfly
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        for (int j = 1; j <= 2 * n - 2 * i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
