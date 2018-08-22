#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    int *p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<n;i++)
    {
      if(i==0)
      {
        *(p+i)=(*ptr+i)*(*(ptr+i+1));
      }
      else if(i==n-1)
      {
          *(p+i)=*(ptr+i)*(*(ptr+i-1));
      }
      else
      {
        *(p+i)=*(ptr+i)*(*(ptr+i+1))*(*(ptr+i-1));
      }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
}
