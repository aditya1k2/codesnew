#include<stdio.h>
#include<stdlib.h>
struct node
{
  struct node *next;
  struct node *prev;
  int data;
};
struct node *start=NULL;
void createcdll()
{
  struct node *newnode,*ptr;
  int num;
  printf("Enter -1 to leave\n");
  printf("Enter data\n");
  scanf("%d",&num);
  while(num!=-1)
  {
    newnode=(struct node *)malloc(sizeof(struct node *));
    newnode->data=num;
    if(start==NULL)
    {
      newnode->prev=NULL;
      newnode->next=start;
      start=newnode;
    }
    else
    {
      ptr=start;
      while(ptr->next!=start)
      {
        ptr=ptr->next;
      }
      newnode->prev=ptr;
      ptr->next=newnode;
      newnode->next=start;
      start->prev=newnode;
    }
    printf("Enter the data\n");
    scanf("%d",&num);
  }
}
void display()
{
  struct node *ptr;
  if(start==NULL)
  {
    printf("Double Circular Link List Is Empty\n");
  }
  else
  {
    ptr=start;
    while(ptr->next!=start)
    {
      printf("%d->",ptr->data);
      ptr=ptr->next;
    }
    printf("%d->\n",ptr->data);
    printf("NULL\n");
  }
}
int menu()
{
  int menudata;
  printf("****MAIN MENU****\n");
  printf("1. Create Double Circular Link List\n");
  printf("2. Display\n");
  printf("3. Exit\n");
  scanf("%d",&menudata);
  return menudata;
}
int main()
{
  while(1)
  {
    switch(menu())
    {
      case 1: createcdll();break;
      case 2: display();break;
      case 3: exit(1);break;
    }
  }
  return 0;
}
