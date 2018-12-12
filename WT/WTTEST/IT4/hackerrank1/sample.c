#include<stdio.h>
int main()
{
    int a,b,c,d,count=1;
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    for(int i=1;i<10^12;i++)
    {
        if(a%i==0)
          c=i;
        if(b%i==0)
          d=i;
        if(d==c)
          count++;
      }
      printf("Num=%d\n",count );
          return 0;
}
