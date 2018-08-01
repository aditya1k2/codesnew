#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  printf("Enter the maximum power\n");
  scanf("%d",&n);
  n=n+1;
  int *ptr=(int *)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
  {
    printf("Enter the co-efficient for X^%d\n",i);
    scanf("%d",ptr+i);
  }
  printf("Enter another array you want to add\n");
  int *p=(int *)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
  {
    printf("Enter the co-efficient for X^%d\n",i);
      scanf("%d",p+i);
  }
  printf("THE EQUATION IS:\n");
  for(int i=0;i<n;i++)
  {
    *(p+i)=*(p+i)+*(ptr+i);
    printf(" %dX^%d",*(p+i),i);
    if(*(p+i+1)>0 &&i<n)
    {
      printf(" +");
    }
  }
}
