#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  int counter;
  struct node *link;
};
struct node *START=NULL;
int main()
{
  struct node *newnode,*pre;
  int n;
  printf("Enter the number of nodes you want to create\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data of link:-%d\n",i+1);
    scanf("%d",&newnode->data);
    //newnode->counter=newnode->counter+1;
    newnode->link=NULL;
    if(START==NULL)
      START=newnode;
      else
      pre->link=newnode;
      pre=newnode;

  }
  printf("check %d\n",pre->data);
  return 0;
}
