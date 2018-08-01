#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,lar=0;
	printf("Enter The Size Of the Array\n");
	scanf("%d",&n);
	int *ptr=(int *)(malloc(n*sizeof(int)));
	for(int i=0;i<n;i++)
	{
		printf("Enter %d element:-\n",i+1);
		scanf("%d",ptr+i);
	}
	printf("**************************\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));

	}
	for(int i=0;i<n;i++)
	{
		if(*(ptr+i)>lar)
		{
			lar=*(ptr+i);
		}
	}
	printf("**********************************\n");
	printf("Largest Number is:-%d\n",lar);
	lar=*ptr;
	printf("**********************************\n");
	for(int i=0;i<n;i++)
	{
		if(*(ptr+i)<=lar)
		{
			lar=*(ptr+i);
		}
	}
	printf("Smallest Number is:-%d\n",lar);

	return 0;
}
