#include<stdio.h>
int main()
{
    int a[10][10],m,n,temp;
    printf("Enter the number of rows\n");
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("OUTPUT:\n");
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        printf("%d  ",a[i][j]);
      }
      printf("\n");
    }
    for(int c=0;c<n;c++)
    {
      for(int i=0;i<m;i++)
      {
        for(int j=i;j<m;j++)
        {
          if(a[c][i]>a[c][j])
          {
            temp=a[c][i];
            a[c][i]=a[c][j];
            a[c][j]=temp;
          }
        }
      }
    }
    printf("OUTPUT:\n");
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        printf("%d  ",a[i][j]);
      }
      printf("\n");
    }
    for(int c=0;c<m;c++)
    {
      for(int i=0;i<n;i++)
      {
        for(int j=i;j<n;j++)
        {
          if(a[i][c]>a[i][c])
          {
            temp=a[i][c];
            a[j][c]=a[i][c];
            a[i][c]=temp;
          }
        }
      }
    }
    printf("OUTPUT:\n");
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        printf("%d  ",a[i][j]);
      }
      printf("\n");
    }
    return 0;
}
