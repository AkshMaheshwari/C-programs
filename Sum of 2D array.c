//Implement a function to find the sum of all elements in a 2D array.

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int rows,cols;
  printf("Enter the number of rows: ");
  scanf("%d",&rows);
  printf("Enter the number of columns: ");
  scanf("%d",&cols);
  int matrix[rows][cols];
  printf("\nEnter the elements of the matrix: \n");
  for(int i=0;i<rows;i++)
    {
      for(int j=0;j<cols;j++)
        {
          scanf("%d",&matrix[i][j]);
        }
    }
  int sum = 0;
  for(int i=0;i<rows;i++)
    {
      for(int j=0;j<cols;j++)
        {
          sum+=matrix[i][j];
        }
    }
  printf("final sum of all elements of the matrix is: %d",sum);
}
