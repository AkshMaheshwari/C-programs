#include <stdio.h>
#include <stdlib.h>
int main(){
  int day_num;
  printf("Enter the day number: ");
  scanf("%d",&day_num);
  switch(day_num){

    case 1:
    printf("Its Monday!\n");
    break;

    case 2:
    printf("Its Tuesday!\n");
    break;

    case 3:
    printf("Its Wednesday!\n");
    break;

    case 4:
    printf("Its Thursday!\n");
    break;

    case 5:
    printf("Its Friday!\n");
    break;

    case 6:
    printf("Its saturday!\n");
    break;

    case 7:
    printf("Its Sunday!\n");
    break;

    default:
    printf("Invalid input!\n");
    break;
  }
}
