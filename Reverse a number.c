//Reversing a number
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  int rev=0;
  while(number)
    {
      rev = rev*10 +number % 10;
      number = number /10;
    }
  printf("reversed number is: %d",rev);
}
