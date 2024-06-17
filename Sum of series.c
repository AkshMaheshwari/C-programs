//Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

#include <stdio.h>
#include <stdlib.h>
int answer(int n)
{
  int ans =0,sum=0;
  for(int i=0;i<n;i++)
    {
      ans = ans * 10 +1;
      sum+=ans;
    }
  return sum;
}
int main()
{
  int n;
  printf("Enter the number of terms you want to take the sum of: ");
  scanf("%d",&n);
  printf("Sum of the series is: %d",answer(n));
  return 0;
  
}
