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
  printf("Enter another Polynomial you want to add\n");
  int *ptr1=(int *)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
  {
    printf("Enter the co-efficient for X^%d\n",i);
      scanf("%d",ptr1+i);
  }
  int *ptr2=(int *)malloc(n*sizeof(int));
  printf("THE EQUATION IS:\n");
  printf("Addition:-\n");
  for(int i=0;i<n;i++)
  {
    *(ptr2+i)=*(ptr1+i)+*(ptr+i);
    printf("%dX^%d+",*(ptr2+i),i);
  }
  printf("\nSubstraction\n");
  int *ptr3=(int *)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
  {
    *(ptr3+i)=*(ptr1+i)-*(ptr+i);
    printf("%dX^%d+",*(ptr3+i),i);

  }

  return 0;
}
