#include <stdio.h>

int main()
{
    int row, col;
    for(row = 1; row <= 5; row++)
    {
        for(col = 1; col <= 5 - row; col++)
        {
            printf(" ");
        }
        for(col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
