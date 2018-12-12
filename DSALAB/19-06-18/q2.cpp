#include<stdio.h>
struct student
{
  int roll;
  char name[100],sub1[10],sub2[10],sub3[10];
};
int main()
{
  struct student stud[5];
  printf("Enter the details OF Student Now:-\n");
  for(int i=0;i<5;i++)
  {
    printf("Student %d:-\n",i+1);
    printf("Name:-");
    gets(stud[i].name);
    printf("Roll no:-");
    scanf("%d",&stud[i].roll);
    printf("Sub1:-");
    gets(stud[i].sub1);
    printf("Sub2:-");
    gets(stud[i].sub2);
    printf("Sub3:-");
    gets(stud[i].sub3);
  }
  for(int i=0;i<5;i++)
  {
    printf("Student %d:-\n");
    printf("Roll No:-",stud[1].roll);
    printf("Name:-",stud[i].name);
    printf("Sub1:-",stud[i].sub1);
    printf("Sub2:-",stud[i].sub2);
    printf("Sub3:-",stud[i].sub3);
  }
  return 0;
}
