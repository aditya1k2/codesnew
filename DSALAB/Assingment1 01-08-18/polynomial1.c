#include<stdio.h>
#include<stdlib.h>
int main()
{
  int od,od1;
  printf("Enter The Order Of the Polynomial 1\n");
  scanf("%d",&od);
  int *ptr=(int*)malloc(od*sizeof(int));
  printf("Enter The Coefficient Of The Polynomial 1\n");
  for(int i=0;i<=od;i++)
  {
    printf("Co-efficient Of X^%d\n",i);
    scanf("%d",*(ptr+i));
  }
  printf("Enter The Order Of the Polynomial 2\n");
  scanf("%d",&od1);
  if(od!=od1)
  {
    printf("Polynomials Cannot Be Added Coz Of Unequal Orders Of Two Polynomials\n");
    //exit(0);
  }
  int *ptr1=(int*)malloc(od*sizeof(int));
  printf("Enter The Coefficient Of The Polynomial 2\n");
  for(int i=0;i<=od1;i++)
  {
    printf("Co-efficient Of X^%d\n",i);
    scanf("%d",*(ptr1+i));
  }
  printf("Addition:-\n");
  int *ptr2=(int*)malloc(od*sizeof(int));
  int *ptr3=(int*)malloc(od*sizeof(int));
  for(int i=0;i<=od1;i++)
  {
    *(ptr2+i)=(*ptr+i)+(*ptr1+i);
    *(ptr3+i)=(*ptr+i)-(*ptr1+i);
  }
  for(int i=0;i<=od;i--)
  {
    printf("%dx^%d+",*(ptr+i));
  }
  return 0;
}
