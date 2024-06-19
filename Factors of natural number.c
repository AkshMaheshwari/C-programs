//To display factors of a natural number

#include <stdio.h>
#include <stdlib.h>
void factors(int number)
{
  for(int i=1;i<=number;i++)
    {
      if(number % i == 0)printf("%d,",i);
    }
}
int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  printf("The factors of %d are: ",number);
  factors(number);
  return 0;
}
