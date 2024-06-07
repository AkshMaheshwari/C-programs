#include <stdio.h>
int main()
{
  int rows;
  printf("Enter the number of rows: ");
  scanf("%d",&rows);
  int max = rows * (rows+1)/2;
  for(int i=rows;i >=1;i--)
    {
      for(int j=1;j<=i;j++)
        {
          printf("%d ",max);
          max--;
        }
      printf("\n");
    }
}
