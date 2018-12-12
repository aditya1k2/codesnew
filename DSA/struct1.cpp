#include<stdio.h>
struct date
{
  int dd,mm,yy;
};
struct student
{
  int roll;
  struct date
  {
    int dd,mm,yy;
  }d;
};

int main()
{
  struct student s;
  scanf("%d%d%d%d",&s.roll,&s.d.dd,&s.d.mm,&s.d.yy);
  printf("Roll:-%d\n%d-%d-%d",s.roll,s.d.mm,s.d.mm,s.d.yy);
  return 0;

}
