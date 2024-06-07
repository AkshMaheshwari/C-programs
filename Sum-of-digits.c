//sum of digits of a number
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int number,sum=0;
  printf("Enter a number: ");
  scanf("%d",&number);
  while(number)
    {
      int digit = number % 10;
      sum+=digit;
      number/=10;
    }
  printf("Sum of digits of the number is: %d",sum);
}
