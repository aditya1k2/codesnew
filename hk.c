#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    //int *ptr1=(int*)malloc(n*sizeof(int));
        for(int i=n-1;i>=0;i--)
        {
            printf("%d ",*(ptr+i));
        }
    return 0;

}
