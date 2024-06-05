#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[30];
    char dept[10];
    float salary;
};
void addEmployee(struct employee emp[],int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("id: ");
        scanf("%d", &emp[i].id);
        printf("name: ");
        scanf("%s", emp[i].name);
        printf("dept: ");
        scanf("%s", emp[i].dept);
        printf("salary: ");
        scanf("%f", &emp[i].salary);
    }
}
void printEmployee(struct employee emp[],int n)
{
    int found = 0;
    int temp_id;
    printf("Enter ID you want to print: ");
    scanf("%d", &temp_id);
    for(int i = 0; i < n; i++)
    {
        if(emp[i].id == temp_id)
        {
            found = 1;
            printf("id: %d\n", emp[i].id);
            printf("name: %s\n", emp[i].name);
            printf("dept: %s\n", emp[i].dept);
            printf("salary: %f\n", emp[i].salary);
            break; 
        }
    }
    if(found == 0)
    {
        printf("Employee with ID %d not found\n", temp_id);
    }
}
int main()
{

    int n;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    struct employee emp[n];
    int choice;
    do
    {
        printf("Enter 1) Add employee 2) Print employee details 3) Exit: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee(emp,n);
                break;
            case 2:
                printEmployee(emp,n);
                break;
            case 3:
                printf("Exiting the program\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while(choice != 3);
    return 0;
}
