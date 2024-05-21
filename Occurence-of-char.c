//Create a function to count the occurrence of a specific character in a string.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int occurrence(char s[],char ch)
{
  int count=0;
  for(int i=0;i<strlen(s);i++)
    {
      if(ch ==s[i])
      {
        count++;
      }
    }
  return count;
}
int main()
{
  char s[100];
  printf("Enter a string: ");
  gets(s);
  char ch;
  printf("Enter the character which you want to find in the string: ");
  scanf("%c",&ch);
  printf("Occurrence of character in the string is: %d",occurrence(s,ch));
  
}
