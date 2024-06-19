//Check Neon Number ( i.e. a number where the sum of digits of the square of the number is equal to the number )

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  int squared_num = num * num;
  int sum=0;
  while(squared_num!=0)
    {
      int digit = squared_num % 10;
      sum+=digit;
      squared_num /=10;
    }
  if(sum == num)
  {
    printf("The number %d is a Neon number",num);
  }
  else
  {
    printf("The number %d isnt a Neon number",num);
  }
  return 0;
}
