#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,max=0;
	printf("Enter The Size Of the Array\n");	
	scanf("%d",&n);
	int *ptr=(int*)(malloc(n*sizeof(int)));
	printf("Enter The Elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(*(ptr+j)>*(ptr+j+1))
			{
				max=*(ptr+j);
				*(ptr+j)=*(ptr+j+i);
				*(ptr+j+1)=max;
			}
		}
	}
	printf("Modified Array:-\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",ptr+i);
	}
	return 0;
}
	
	
