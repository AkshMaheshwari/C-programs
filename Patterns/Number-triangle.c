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
        for(col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        for(col = row - 1; col >= 1; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}
