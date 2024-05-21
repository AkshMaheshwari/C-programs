//sorting of marks of students using structs:

#include <stdio.h>
#include <stdlib.h>
struct student 
{
  int roll_no;
  char name[20];
  float marks;
};
void descending_sort(struct student s[],int n)
{
  for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
        {
          if(s[i].marks < s[j].marks)
          {
            float temp = s[i].marks;
            s[i].marks = s[j].marks;
            s[j].marks = temp;
          }
        }
    }
}
int main()
{
  int n;
  printf("Enter number of students: ");
  scanf("%d",&n);
  struct student s[n];
  for(int i=0;i<n;i++)
    {
      printf("student %d details\n",i+1);
      printf("Enter name of student: ");
      scanf("%s",s[i].name);
      printf("Enter roll no of student: ");
      scanf("%d",&s[i].roll_no);
      printf("Enter marks of student: ");
      scanf("%f",&s[i].marks);
    }
  descending_sort(s,n);
 for(int i=0;i<n;i++)
   {
     printf("Name: %s\n, Roll No: %d\n, Marks: %f\n",s[i].name,s[i].roll_no,s[i].marks);
   }
  return 0;
}
