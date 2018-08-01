#include<stdio.h>
void nonzero(int a[10][10],int n)
{
  int count=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(a[i][j]!=0)
      {
        count++;
      }
    }
  }
  printf("Number of non zero element %d",count);
}
void major_dia(int a[10][10],int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i<j)
      {
        sum=sum+a[i][j];
      }
    }
  }
  printf("Sum of element above major diagonal:%d",sum);
}
void minor_dia(int a[10][10],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i+j>n-1)
      {
        printf("\n%d\n",a[i][j]);
      }
    }
  }
}
void product_dia(int a[10][10],int n)
{
  int product=1;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==j || i+j==n-1)
      {
        product=product*a[i][j];
      }
    }
  }
  printf("PRODUCT: %d",product);
}
int main()
{
  int a[10][10],n;
  printf("Enter the number of rows and collums\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("Enter the [%d][%d] element\n",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("1.FInd the number of non-zero element\n2.Sum of the element above major diagonal\n");
  printf("3.Display the elementbelow minor diagonal\n4.Product of the diagonal element\n");
  int ch;
  printf("Enter your choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:{nonzero(a,n);break;}
    case 2:{major_dia(a,n);break;}
    case 3:{minor_dia(a,n);break;}
    case 4:{product_dia(a,n);break;}
  }
  return 0;
}
