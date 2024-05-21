#include <stdio.h>

int main()
{
  int rows,columns;
  printf("Enter number of rows and columns: \n");
  scanf("%d %d",&rows,&columns);
  int array[rows][columns];
  for (int i=0;i<rows;i++)
  {
      for (int j=0;j<columns;j++)
      {
          printf("Enter element at index %d %d: ",i+1,j+1);
          scanf("%d",&array[i][j]);

      }

  }
  printf("Entered matrix is\n");
  for (int i=0;i<rows;i++)
  {
      for (int j=0;j<columns;j++)
      {
          printf("%d",array[i][j]);
      }
      printf("\n");
  }
  int transposeArray[columns][rows];
  printf("Transpose of matrix is\n");
  for (int i=0;i<columns;i++)
  {
      for (int j=0;j<rows;j++)
      {
          printf("%d",array[j][i]);
      }
      printf("\n");
  }



}
