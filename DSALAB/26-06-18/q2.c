
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,temp;
	printf("Enter The Size OF the array\n");
	scanf("%d",&n);
	int *ptr=(int*)malloc(n*sizeof(int));
	int *ptr1=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("Enter The %d element of the  array\n",i+1);
		scanf("%d",ptr+i);
	}
	for(int i=n-1,j=0;i>=0;i--,j++)
	{
		*(ptr1+j)=*(ptr+i);
	}
	printf("Elements Are:-\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",*(ptr1+i));

	}



	return 0;
}
