#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks1,marks2,marks3;
    struct dob
    {
      int dd,mm,yy;
    }ab;
};
int main()
{
    float cal;
    char flush[4];
    struct student s1[5];
    for(int i=0;i<5;i++)
    {
      printf("Enter the roll number\n");
      scanf("%d",&s1[i].roll);
      gets(flush);
      printf("Enter the name\n");
      gets(s1[i].name);
      printf("Enter the marks in 3 subject\n");
      scanf("%f%f%f",&s1[i].marks1,&s1[i].marks2,&s1[i].marks3);
      printf("Enter the Date of Birth\n");
      scanf("%d%d%d",&(s1[i].ab).dd,&(s1[i].ab).mm,&(s1[i].ab).yy);
    }
    printf("DISPLAYING ALL DETAILS:\n");
    for(int i=0;i<5;i++)
    {
      cal=s1[i].marks1+s1[i].marks2+s1[i].marks3;
      if((cal/3)>9.0)
      {  printf("Roll Number:-%d\n",s1[i].roll);
        printf("Name:-%s\n",s1[i].name);
        printf("Marks in 3 subjects:-%f\n%f\n%f\n",s1[i].marks1,s1[i].marks2,s1[i].marks3);
        printf("DOB:-%d/%d/%d\n",s1[i].ab.dd,s1[i].ab.mm,s1[i].ab.yy);
        printf("CGPA:-%f\n",cal);
      }
      printf("\n\n");
    }
}
