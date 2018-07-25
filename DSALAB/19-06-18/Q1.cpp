#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a[100],n;
  int x=1,cse,position,element;
  while(x=!0)
  {
  printf("1. Create An Array\n");
  printf("2. Display The Array\n");
  printf("3. Insert an Element at first position\n");
  printf("4. Insert an Element at last position\n");
  printf("5. Insert an Element at any position\n");
  printf("6. Delete an Element at first position\n");
  printf("7. Delete an Element at last position\n");
  printf("8. Delete an Elemnt from any position\n");
  printf("9.Exit\n");
  scanf("%d",&cse);
  switch (cse) {
    case 1:{
      printf("Enter the size of the array\n");
      scanf("%d",&n);
      printf("Array Created Successfully==%d\n",n);
      for(int i=0;i<n;i++){
        printf("Enter The %d element of the array\n",i);
        scanf("%d",&a[i]);
      }
      printf("Array Loaded\n");
      break;
    }
    case 2:
    {
      printf("Your Array is:-\n");
      for(int i=0;i<n;i++)
      {
        printf("%d\n",a[i]);
      }
      break;
    }
    case 3:
    {
    position=0;
    for(int i=n+1;i>0;i--)
    {
      a[i]=a[i-1];
    }
    printf("Enter the Element you want to Insert\n");
    scanf("%d",&element);
    n=n+1;
    printf("###########=%d\n",n);
    a[0]=element;
    printf("Modified Array is:-\n");
    for(int i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }
    break;
  }
  case 4:
  {
    n=n+1;
    printf("Enter The Element You want to insert at last position\n");
    scanf("%d",&element);

    a[n-1]=element;
    printf("Modified Array is:-\n");
    for(int i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }
    break;
  }
  case 5:
  {
    printf("Currently there are %d elements in the array\n",n);
    printf("Enter the position where you want to insert the element\n");
    scanf("%d",&position);
    for(int i=n;i>=position;i--)
    {
        a[i]=a[i-1];
    }
    printf("Enter the element you want to enter\n");
    scanf("%d",&element);
    a[position]=element;
    n=n+1;
    printf("Modified array is:-\n");
    for(int i=0;i<=n-1;i++)
    {
      printf("%d\n",a[i]);
    }
    break;
  }
case 6:
{
  printf("Currently there are %d elements in the array\n",n);
  position=0;
  for(int i=position;i<n-1;i++)
  {
    a[i]=a[i+1];
  }
  n=n-1;
  printf("Modified Array is:-\n");
  for(int i=0;i<=n;i++)
  {
    printf("%d\n",a[i]);
  }
  break;
}
case 7:
{
 printf("Modified array is:-\n");
 position=n;
  for(int i=position;i<n;i++)
  {
    a[i]=a[i+1];
  }
  n=n-1;
  for(int i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  break;
  }
  case 8:
  {
    printf("Enter the position you want to delete the element\n");
    scanf("%d",&position);
    for(int i=position;i<n;i++)
    {
      a[i]=a[i+1];
    }
    n=n-1;
     printf("Modified array is:-\n");
     for(int i=0;i<n;i++)
     {
       printf("%d\n",a[i]);
     }
     break;
  }
  case 9:
  exit(0);
  }

  x++;}
return 0;
}
