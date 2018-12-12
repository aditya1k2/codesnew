#include<stdio.h>
#include<stdlib.h>
struct empl
{
  int emp;
  char gender[2];
  char department[20];
  float basic;
  char name[20];
};
int main()
{
    struct empl a[20];
    char flush[20];
    int n;
    printf("Enter the number of employeen\n");
    scanf("%d",&n);
   struct empl*ptr=(struct empl*)malloc(n*sizeof(struct empl));
    for(int i=0;i<n;i++)
    {
      printf("Enter the basic pay\n");
      scanf("%f",&(i+ptr)->basic);
      printf("Enter the Emp id:-\n");
      scanf("%d",&(ptr+i)->emp);
      gets(flush);
      printf("ENter the name\n");
      scanf("%s",&(ptr+i)->name);
      gets(flush);
      printf("Enter the gender:-\n");
      scanf("%s",&(ptr+i)->gender);
      printf("Enter the department\n");
      scanf("%s",&(ptr+i)->department);
    }
    printf("OUTPUT\n");
    for(int i=0;i<n;i++)
      {
        printf("Emp-id:-%d\n",(ptr+i)->emp);
        printf("NAME:-%s\n",(ptr+i)->name);
        printf("Gender:-%s\n",(ptr+i)->gender);
        printf("Department:-%s\n",(ptr+i)->department);
        printf("Gross pay:-%f\n",((ptr+i)->basic+((ptr+i)->basic*0.75)+((ptr+i)->basic*0.25)));
      }
  }
