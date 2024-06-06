#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int i, j; 
    for (i = 1; i <= rows; i++) 
    { 
        // Print stars for each solid row
        if (i == 1 || i == rows) {
            for (j = 1; j <= cols; j++) {
                printf("*");
            }
        } else {
            // stars for hollow rows
            for (j = 1; j <= cols; j++) {
                if (j == 1 || j == cols) {
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
