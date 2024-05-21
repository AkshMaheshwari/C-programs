#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void Asceningsort(int array[],int size)
{
  for (int i=0;i<=size;i++)
    {
      for (int j=0;j<=size;j++)
        {
          if(array[j]>array[j+1])
          {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            
          }
        }
    }
}
void Descendingsort(int array[],int size)
{
  for (int i=0;i<=size;i++)
    {
      for (int j=0;j<=size;j++)
        {
          if(array[j]<array[j+1])
          {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;

          }
        }
    }
}
void printArray(int array[],int size)
{
  for (int i=0;i<size;i++)
    {
      printf("%d ",array[i]);
    }
}
int main()
{
  int array[] ={9,6,7,4,3,2,5,1,8};
  int size = sizeof(array)/sizeof(array[0]);
  int t;
  printf("Enter the type of sorting: 1)Ascending sort,2)Descending sort: ");
  scanf("%d",&t);
  switch (t)
    {
      case 1:
      Asceningsort(array,size);
      printArray(array,size);
      break;

      case 2:
      Descendingsort(array,size);
      printArray(array,size);
      break;

      default:
      printf("Invalid input please enter 1 or 2 only: ");
      
    }
  
}






