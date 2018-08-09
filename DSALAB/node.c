#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *list;
};
struct node *START=NULL;
int main()
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	START=newnode;
	printf("Enter the data\n");
	scanf("%d",&newnode->data);
	printf("Entered Data is:-%d\n",newnode->data);
	return 0;
}
	
	
