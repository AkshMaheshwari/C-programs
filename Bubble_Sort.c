//sorting of array 

#include <stdio.h>
#include <stdlib.h>
void ascending_sort(int arr[],int n)
{
  for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
        {
          if(arr[i] > arr[j])
          {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
          }
        }
    }
  printf("Sorting array in ascending order results in :");
  for(int i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
}
void descending_sort(int arr[],int n)
{
  for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
        {
          if(arr[i] < arr[j])
          {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
          }
        }
    }
  printf("Sorting array in descending order results in :");
  for(int i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
}

int main()
{
  int n;
  printf("Enter size of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enetr the elements of the array: ");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  int choice;
  printf("Enter 1)Ascending sort of array or 2)Descending sort of array: ");
  scanf("%d",&choice);
  switch(choice)
    {
      case 1:
      ascending_sort(arr,n);
      break;

      case 2:
      descending_sort(arr,n);
      break;

      default:
      printf("Invalid choice");
      break;
    }
}
