//Write a C program to find the sum of an A.P. series. eg 1 5 9 13....n terms.(take any Ap series)

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,n,d;
  printf("Enter the first terms: ");
  scanf("%d",&a);
  printf("Enter the number of terms: ");
  scanf("%d",&n);
  printf("Enter the common difference: ");
  scanf("%d",&d);
  int sum;
  sum = (2 * a +(n-1) * d)*n/2;
  printf("Sum of the series is:%d",sum);
  return 0;
}
