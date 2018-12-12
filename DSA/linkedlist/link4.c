#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
void create()
{
    int i=0;
    struct node *newnode,*ptr;
    newnode=(struct node*)malloc(sizeof(struct node*));
    if(start==NULL)
    {
      printf("Enter the data1\n");
      scanf("%d",&newnode->data);
      start=newnode;
      newnode->next=NULL;
    }
    else
    {
      ptr=start;
      ptr->next=newnode;
      while(ptr->next!=NULL)
      {
        ptr=ptr->next;
      }
      printf("Enter the data %d\n",i);
      i++;
      scanf("%d",&newnode->data);
      ptr->next=newnode;
      newnode->next=NULL;
    }
}
void display()
{
  struct node *ptr;
  ptr=start;
  if(start==NULL)
    printf("List is empty\n");
  else
  {
  while(ptr->next!=NULL)
  {
    printf("%d->",ptr->data);
    ptr=ptr->next;
  }
  //printf("%d",ptr->data);
  }
}
int main()
{

  create();
  for(int i=0;i<2;i++)
  create();
  //create();

  display();
  //display();
  return 0;
}
