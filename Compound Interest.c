// Calculating Compound interest and Amount without using math.h

#include <stdio.h>
#include <stdlib.h>
int main()
{
 float principle,rate,time,interest,amount,sum=0;
  printf("Enter the principle amount: ");
  scanf("%f",&principle);
  printf("Enter rate: ");
  scanf("%f",&rate);
  printf("Enter time period: ");
  scanf("%f",&time);
  for(int i=1;i<=time;i++)
    {
      interest = principle*rate/100; //SI for 1 year is same as CI for 1 year
      amount = principle+interest; //Amount = principle + interest
      principle = amount; //Amount of 1st year is priciple for the next year and this is looped
      sum+=interest;//Total interest is sum of all the interest over the years
    }
  printf("The Compound interest is:%.2f\n",sum);
  printf("Total amount is: %.2f",amount);
  return 0;
}
