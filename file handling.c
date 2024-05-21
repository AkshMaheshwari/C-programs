#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    int nc=0,nl=1;
    char ch;
    fptr=fopen("test.txt","r");
    ch=getc(fptr);
    while(ch!=EOF)
    {
       if(ch=='\n')
       {
           nl++;
       }
       nc++;
       ch=getc(fptr);
    }
    printf("\n No of Characters: %d",nc);
    printf("\n No of lines: %d",nl);
}
