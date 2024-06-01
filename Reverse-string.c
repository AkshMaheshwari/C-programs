#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char s[1000])//function to print reverse order of characters in the string 
{
    for(int i=strlen(s)-1;i>=0;i--){
      printf("%c",s[i]);
    }
}
int main()
{
    char s[1000];
    printf("Enter the string: ");//taking input string
    scanf("%s",s);
    printf("Original string is: %s\n",s);//original string output
    printf("Reversed string is: ");
    reverse(s);//output after reversing the string
    
}
