#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int i, j;
    for (i = 1; i <= rows; i++) {
        // Print stars for each solid row
        if (i == 1 || i == rows) {
            for (j = 1; j <= rows; j++) {
                printf("*");
            }
        } else {
            // Stars for hollow rows
            for (j = 1; j <= rows; j++) {
                if (j == 1 || j == rows) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        // Move to the next line/row
        printf("\n");
    }

    return 0;
}
