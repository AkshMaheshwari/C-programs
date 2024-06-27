//Extraction of digits of a number

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  int n = number;
  printf("The digits of number %d are: ",number);
  while(n)
    {
      int digit = n % 10;
      printf("%d, ",digit);
      n/=10;
    }
}
