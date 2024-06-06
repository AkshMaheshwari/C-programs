//Write a program to count the number of vowels and consonants in a string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int vowel_count = 0;
  int consonant_count = 0;
  char s[100];
  printf("Enter a string: ");
  gets(s);
  for(int i=0;i<strlen(s);i++)
    {
      if(s[i] >=65 && s[i] <=90) s[i]+=32;
      
      if(s[i] == 'a'|| s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') vowel_count++;

      else consonant_count++;
    }
  printf("Vowel count is: %d\n",vowel_count);
  printf("Consonant count is: %d\n",consonant_count);
