//Write a C program to check whether a number is a Strong Number or not.
//A strong number is a number when the number equals to sum of factorials of its respective digits for example 145 = 1! + 4! + 5!

#include <stdio.h>
#include <stdlib.h>
int factorial(int number)
{
  if(number == 0)return 1;

  else return number * factorial(number-1);
}

int main()
{
  int number;
  printf("Enter the number to check whether its strong or not: ");
  scanf("%d",&number);
  int n1 = number;
  int sum = 0;
  while(number!=0)
    {
      int digit = number % 10;
      sum+=factorial(digit);
      number /=10;
    }
  if(sum == n1)
  {
    printf("The number %d is a strong number",n1);
  }
  else 
  {
    printf("The number %d is not a strong number",n1);
  }
  return 0;
}
