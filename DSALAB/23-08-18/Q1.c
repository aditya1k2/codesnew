#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*next;
  struct node*prev;
};
struct node*start=NULL;
void create()
{
  int num,num1=1;
  struct node*ptr;
  while(num1!=-1)
  {
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:-\n");
    scanf("%d",&num);
    newnode->data=num;
    if(start==NULL)
    {
      start=newnode;
      newnode->next=NULL;
      newnode->prev=NULL;
    }
    else
    {
      ptr=start;
      while(ptr->next!=NULL)
      {
        ptr=ptr->next;
      }
      newnode->prev=ptr;
      newnode->next=NULL;
      ptr->next=newnode;
    }
    printf("Enter -1 to leave\n");
    scanf("%d",&num1);
  }
}
void display()
{
  struct node*ptr=start;
  while(ptr!=NULL)
  {
    printf("%d\t",ptr->data);
    ptr=ptr->next;
  }
}
void rev()
{
struct node*ptr=start,*q=start;
  while(ptr->next!=NULL)
  {
    ptr=ptr->next;
  }
  printf("%d",ptr->data); //comming element addrres
  while(q->next!=NULL)
  {
    struct node *j=ptr->next;
    ptr->next=start;
    start->prev=ptr;
    struct node *i=start;
    start=start->next;
    i->next=j;
    start->prev=NULL;
  }
}
int main()
{
  create();
  display();
}
