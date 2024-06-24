//sorting of characters of a string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(char *s)
{
  for(int i=0;i<strlen(s);i++)
    {
      for(int j=i+1;j<strlen(s);j++)
        {
          if(s[i] > s[j])
          {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
          }
        }
    }
}

int main()
{
  char s[100];
  printf("Enter a string: ");
  scanf("%s",s);
  printf("Original string is: %s\n",s);
  sort(s);
  printf("Sorted string is: %s",s);
  
}
