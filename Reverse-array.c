#include <stdio.h>
#include <stdlib.h>
void reverse_arr(int array[],int n)
{
    printf("Reversed array is: ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",array[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    reverse_arr(array,n);

}
