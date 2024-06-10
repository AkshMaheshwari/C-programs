#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("Enter a mumber: ");
  scanf("%d",&n);
  int result =0;
  int original_num = n;
  while(n!=0)
    {
      int remainder = n % 10;
      result+=remainder*remainder*remainder;
      n/=10;
    }
  if(result == original_num)
  {
    printf("The number %d is An armstrong number",original_num);
  }
  else printf("The number %d is not An armstrong number",original_num);
}
