//Sorting of Marks of students using structs 

#include <stdio.h>
#include <stdlib.h>
struct student
{
int roll_no;
char name[30];
float marks; 
};
void ascending_sort(struct student s[],int n)
{
  struct student temp;
  for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
        {
          if(s[i].marks > s[j].marks)
          {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
          }
        }
    }
}
void descending_sort(struct student s[],int n)
{
  struct student temp;
  for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
        {
          if(s[i].marks < s[j].marks)
          {
            temp = s[i];
            s[i] = s[j] ;
            s[j]  = temp;
          }
        }
    }
}
int main()
{
  int n;
  printf("Enter the number of students: ");
  scanf("%d",&n);
  struct student s[n];
  for(int i=0;i<n;i++)
    {
      printf("Student %d details:\n",i+1);
      printf("Enter name of the student: ");
      scanf("%s",s[i].name);
      printf("Enter roll no of student: ");
      scanf("%d",&s[i].roll_no);
      printf("Enter marks of student: ");
      scanf("%f",&s[i].marks);
    }
  printf("\n");
  int choice;
  printf("Do you want to 1)sort in ascending order or 2)sort in descending order: ");
  scanf("%d",&choice);
  switch (choice)
    {
    case 1:
      ascending_sort(s,n);
      for(int i=0;i<n;i++)
      {
      printf("Name: %s,\n Roll No: %d,\n Marks: %f\n",s[i].name,s[i].roll_no,s[i].marks);
     
      }
      break;
    case 2:
      descending_sort(s,n);
      for(int i=0;i<n;i++)
      {
      printf("Name: %s,\n Roll No: %d,\n Marks: %f\n",s[i].name,s[i].roll_no,s[i].marks);
      
      }
      break;
    }
  return 0;
  

}
