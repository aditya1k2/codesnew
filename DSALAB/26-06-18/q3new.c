#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  printf("Enter the number of element:\n");
  scanf("%d",&n);
  int *ptr=(int *)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
  {
    scanf("%d",(ptr+i));
  }
  int temp;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<i;j++)
    {
      if(*(ptr+i)<*(ptr+j))
      {
        temp=*(ptr+j);
        *(ptr+j)=*(ptr+i);
        *(ptr+i)=temp;
      }
    }
  }
  printf("OUTPUT:\n" );
  for(int i=0;i<n;i++)
  {
    printf("%d\n",*(ptr+i));
  }
  return 0;
}
