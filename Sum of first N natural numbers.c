#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  int sum=0;
  for(int i=0;i<=n;i++)
    {
      sum+=i;
    }
  printf("Sum of first %d Natural numbers is: %d",n,sum);
}
