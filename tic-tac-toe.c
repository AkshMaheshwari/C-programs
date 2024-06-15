#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    printf(" %c  | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf(" ---|---|---\n");
    printf(" %c  | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf(" ---|---|---\n");
    printf(" %c  | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

int checkfreespaces()
{
    int freespaces = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
            {
                freespaces++;
            }
        }
    }
    return freespaces;
}

void playermove()
{
    int row, col;
    do
    {
        printf("Enter row (#1-3): ");
        scanf("%d", &row);
        row--;
        printf("Enter column (#1-3): ");
        scanf("%d", &col);
        col--;
        if (board[row][col] != ' ')
        {
            printf("Invalid Move!\n");
        }
        else
        {
            board[row][col] = PLAYER;
            break;
        }
    } while (1);
}

void computermove()
{
    srand(time(0));
    int x, y;
    do
    {
        x = rand() % 3;
        y = rand() % 3;
    } while (board[x][y] != ' ');

    board[x][y] = COMPUTER;
}

char checkwinner()
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
    }
    // Check columns
    for (int j = 0; j < 3; j++)
    {
        if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] != ' ')
        {
            return board[0][j];
        }
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    return ' ';
}

void printwinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("You win!!\n");
    }
    else if (winner == COMPUTER)
    {
        printf("You lost!\n");
    }
    else
    {
        printf("It's a draw!\n");
    }
}

int main()
{
    char winner = ' ';
    resetBoard();
    while (winner == ' ' && checkfreespaces() > 0)
    {
        printBoard();
        playermove();
        winner = checkwinner();
        if (winner != ' ' || checkfreespaces() == 0)
        {
            break;
        }
        computermove();
        winner = checkwinner();
        if (winner != ' ' || checkfreespaces() == 0)
        {
            break;
        }
    }
    printBoard();
    printwinner(winner);

    return 0;
}
