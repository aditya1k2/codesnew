#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*next;
};
struct node*start=NULL;
void create()
{
  int num,num1=1;
  struct node*ptr;
  while(num1!=-1)
  {
    struct node*newnode=(struct node*)malloc(sizeof(struct node*));
    printf("Enter data:-\n");
    scanf("%d",&num);
    newnode->data=num;
    if(start==NULL)
    {
      start=newnode;
      newnode->next=NULL;
    }
    else
    {
      ptr=start;
      while(ptr->next!=NULL)
      {
        ptr=ptr->next;
      }
      ptr->next=newnode;
      newnode->next=NULL;
    }
    printf("Enter -1 to leave\n");
    scanf("%d",&num1);
  }
}
void occour()
{
  int k,count=0;
  printf("Enter a number to find number of occurence\n");
  scanf("%d",&k);
  struct node*ptr=start;
  while(ptr!=NULL)
  {
    if(ptr->data==k)
    {
      count++;
    }
    ptr=ptr->next;
  }
  printf("Number of oocurences are/is %d\n",count);
}
int main()
{
  create();
  occour();
}
