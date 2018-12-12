#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,temp;
  printf("Enter the number of elemnts\n");
  scanf("%d",&n);
  int *ptr=(int *)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
  {
    scanf("%d",(ptr+i));
  }
  for(int i=0;i<n;i++)
  {
      for(int j=i;j<n-1;j++)
      {
        if(*(ptr+j)%2!=0)
        {
          temp=*(ptr+j);
          *(ptr+j)=*(ptr+j+1);
          *(ptr+j+1)=temp;
        }
      }
  }
  printf("OUTPUT IS:\n");
  for(int i=0;i<n;i++)
  {
    printf("%d\n",*(ptr+i));
  }
}
