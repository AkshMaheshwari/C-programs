// Write a program to find the second largest element in an array.

#include <stdio.h>
#include <stdlib.h>
void sort(int arr[],int n)
{
  for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
        {
          if(arr[i]>arr[j])
          {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
          }
        }
    }
}

int main()
{
  int n;
  printf("Enter size of the array: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  sort(arr,n);
  if (n < 2) {
          printf("Array doesn't have a second largest element.");
      } else {
          printf("The second largest element in the array is: %d", arr[n - 2]);
      }
      return 0;
  
}
