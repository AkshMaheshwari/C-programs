#include <stdio.h>

int main()
{
    int row, col;
    // Top Half
    for(row = 4; row >= 1; row--)
    {
        for(col = row; col >= 1; col--)
        {
            printf("*");
        }
        for(col = 8 - 2 * row; col >= 1; col--)
        {
            printf(" ");
        }
        for(col = row; col >= 1; col--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    // Bottom Half
    for(row = 1; row <= 4; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("*");
        }
        for(col = 1; col <= 8 - 2 * row; col++)
        {
            printf(" ");
        }
        for(col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
