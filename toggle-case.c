#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//toggle case means switching upper case to lower case or vice versa
//we are achieving this logic by switching the ASCII values of to characters 
//A-65 Z-90   a-97 z-122 so their Ascii value has a diff of 32
int main()
{
  char s[100];
  printf("Enter a string: ");
  gets(s);
  for(int i=0;i<strlen(s);i++)
    {
      if(s[i]>=65 && s[i]<=90)
      {
        s[i]=s[i]+32;
      }
      else if(s[i]>=97 && s[i]<=122)
      {
        s[i]=s[i]-32;
      }
    }
  printf("After applying toggle case new string is: %s",s);
  return 0;
}
