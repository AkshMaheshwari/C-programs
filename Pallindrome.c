//pallindrome using 2 pointer approach 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ispallindrome(char s[])
{
  int left=0;
  int right = strlen(s)-1;
  while(left < right)
    {
      if(s[left]!=s[right])
      {
        return 0;
      }
      right--;
      left++;
    }
  return 1;
}

int main()
{
  char s[100];
  printf("Enter a string: ");
  gets(s);
  if(ispallindrome(s))
  {
    printf("Yes it is a pallindrome: ");
  }
  else
  {
    printf("Not a pallindrome:");
  }
}
