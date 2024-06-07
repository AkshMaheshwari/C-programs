#include <stdio.h>
#include <stdlib.h>
struct employee
{
  int id;
  char name[20];
  char department[20];
  float marks;
};
void add_employee(struct employee e[],int n)
{
  for(int i=0;i<n;i++)
    {
      printf("Enter Employee %d id:",i+1);
      scanf("%d",&e[i].id);
      printf("Enter Employee %d name:",i+1);
      scanf("%s",e[i].name);
      printf("Enter Employee %d department:",i+1);
      scanf("%s",e[i].department);
      printf("Enter Employee %d marks:",i+1);
      scanf("%f",&e[i].marks);
    }
}
void print_employee(struct employee e[],int n)
{
  for(int i=0;i<n;i++)
    {
      printf("Employee %d: \n",i+1);
      printf("ID: %d\n",e[i].id);
      printf("Name: %s\n",e[i].name);
      printf("Department: %s\n",e[i].department);
      printf("marks: %f\n",e[i].marks);
      
    }
  printf("\n");
}
void update_employee(struct employee e[],int n)
{
  int temp,choice;
  printf("Enter the ID you want to edit: ");
  scanf("%d",&temp);
  for(int i=0;i<n;i++)
    {
      if(temp==e[i].id)
      {
        printf("ID found! What do you want to edit from the following: 1)Name 2)Department 3)Marks: ");
        scanf("%d",&choice);
        switch(choice)
          {
            case 1:
            printf("Enter new name: ");
            scanf("%s",e[i].name);
            break;

            case 2:
            printf("Enter new department: ");
            scanf("%s",e[i].department);
            break;

            case 3:
            printf("Enter new marks: ");
            scanf("%f",&e[i].marks);
            break;

            default:
            printf("Invalid Input: ");
          }
      }
      else printf("Invalid ID input: \n");
    }
}
int main()
{
  struct employee e;
  int n;
  printf("Enter the number of employees: ");
  scanf("%d",&n);
  int option;
  do
    {
      printf("Hello there would you like to :\n 1)Add employee\n 2)Print employee details \n 3)Update employee info \n 4)Exit the program: ");
      scanf("%d",&option);

      switch(option)
        {
          case 1:
          add_employee(&e,n);
          break;

          case 2:
          print_employee(&e,n);
          break;

          case 3:
          update_employee(&e,n);
          break;

          case 4:
          printf("Exiting the program\n");
          break;

          printf("\n");
          
        }
    }while(option !=4);
 
}
