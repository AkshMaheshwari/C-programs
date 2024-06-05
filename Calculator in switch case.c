#include <stdio.h>
#include <stdlib.h>
int main()
{
  char operator;
  printf("Enter the operator you want to use (+,-,* or /): ");
  scanf("%c",&operator);
  int a,b;
  printf("Enter 2 numbers: ");
  scanf("%d %d",&a,&b);
  switch(operator)
    {
      case '+':
      printf("%d",a+b);
      break;

      case '-':
      printf("%d",a-b);
      break;

      case '*':
      printf("%d",a*b);
      break;

      case '/':
      printf("%d",a/b);
      break;

      default:
      printf("Invalid operator used: ");
      break;
    }
}
