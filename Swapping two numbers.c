#include <stdio.h>
#include <stdlib.h>
//Swapping 2 numbers
int main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping values of a and b are: %d %d\n",a,b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping values of a and b are: %d %d",a,b);
    return 0;
}
