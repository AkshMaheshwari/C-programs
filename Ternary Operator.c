//positive negative or 0 using ternary operator
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  n > 0 ? printf("Positive") : (n < 0 ? printf("Negative "):printf("0"));
}
