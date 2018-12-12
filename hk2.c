#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,d,temp;
    scanf("%d",&n);
    int *ptr=(int*)(malloc(n*sizeof(int)));
    scanf("%d",&d);
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }




    for(int i=0;i<n;i++)
    {
      temp=*(ptr+i);
      *(ptr+i)=*(ptr+i+1);
      *(ptr+(n-1))=temp;

    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}
