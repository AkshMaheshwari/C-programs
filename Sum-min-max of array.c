//Min max and sum of an array
#include <stdio.h>
#include <stdlib.h>
int sum(int arr[],int n)
{
  int s=0;
  for(int i=0;i<n;i++)
    {
      s+=arr[i];
    }
  return s;
}
int minimum(int arr[],int n)
{
  int min=arr[0];
  for(int i=0;i<n;i++)
    {
      if(arr[i] < min)
      {
        min=arr[i];
      }
    }
  return min;
}
int maximum(int arr[],int n)
{
  int max=arr[0];
  for(int i=0;i<n;i++)
    {
      if(arr[i]> max)
      {
        max=arr[i];
      }
    }
  return max;
}
int main()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements: ");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  int choice;
  printf("Enter the number 1,2 or 3 where 1)Sum 2)Minimum 3)Maximum: ");
  scanf("%d",&choice);
  switch(choice)
    {
      case 1:
      printf("%d",sum(arr,n));
      break;

      case 2:
      printf("%d",minimum(arr,n));
      break;

      case 3:
        printf("%d",maximum(arr,n));
      break;

      default:
      printf("Invalid choice: ");
    }
}
