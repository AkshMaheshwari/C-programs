#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  int sum = n*(n+1)/2;
  printf("Sum of first %d Natural numbers is: %d",n,sum);
}
