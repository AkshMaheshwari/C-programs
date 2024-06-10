#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  int original = num;
  int count=0;
  while(num)
    {
      int digit = num % 10;
      count++;
      num/=10;
    }
  printf("The number of digits in the number %d is: %d",original,count);
}
