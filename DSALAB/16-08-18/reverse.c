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
void display()
{
    struct node*ptr;
    ptr=start;
    while(ptr->next!=NULL)
    {
      printf("%d\n",ptr->data);
      ptr=ptr->next;
    }
      printf("%d",ptr->data);
}
void rev()
{
  int a;
  struct node*ptr,*p=NULL,*prev=NULL,*j=start;
  ptr=start;
  printf("Enter the position of element to be reversed\n");
  scanf("%d",&a);
  for(int i=1;i<a;i++)
  {
    j=j->next;
  }
  prev=j->next;
  for(int i=1;i<=a;i++)
  {
    p=ptr->next;
    ptr->next=prev;
    prev=ptr;
    ptr=p;
  }
  start=prev;
}
int main()
{
  create();
  rev();
  display();
}
