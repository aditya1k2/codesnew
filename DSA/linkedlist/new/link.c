#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *link;
};
struct node *START=NULL;
/*void insert()
{
  struct node *newnode=(struct node*)malloc(sizeof(struct node *));
  int n;
  printf("Enter data\n");
  scanf("%d",&n);
  if(start=NULL)
  {
    start=newnode;
    newnode->next=NULL;
    newnode->data=n;
  }
  else
  {
    //struct node *p;
    //p=start;
    while(n!=-1)
    {
      newnode->data=n;
      newnode->next=start;
      start=newnode;
    }
  }
}*/
void insertnode()
{
  struct node *temp,*t;
  temp=(struct node*)malloc(sizeof(struct node *));
  printf("Enter a Data\n");
  scanf("%d",&temp->info);
  temp->link=NULL;
  if(START==NULL)
  {
    START=temp;
  }
  else
  {
    t=START;
    while(t->link!=NULL)
    {
      t=t->link;
    }
    t->link=temp;
  }
}
void display()
{
  struct node *trace;
  if(START==NULL)
  {
    printf("List is empty\n");
    return;
  }
  else
  {
    trace=START;
    while(trace->link!=NULL)
    {
      printf("%d->",trace->info);
      trace=trace->link;
    }
    printf("%d->",trace->info);
    printf("NULL\n");
  }
}
void insertbeg()
{
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  struct node *beg;
  beg=START;
  printf("Enter data to insert at beginning\n");
  scanf("%d",&newnode->info);
  newnode->link=beg;
  START=newnode;
}
void insertend()
{
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  struct node *end,*t;
  printf("Enter data to insert at last\n");
  scanf("%d",&newnode->info);
  newnode->link=NULL;
  if(START==NULL)
  {
    printf("List is empty\n");
    return;
  }
  else
  {
    t=START;
    while(t->link!=NULL)
    {
      t=t->link;
    }
    t->link=newnode;
  }
}
int insertany(int key)
{
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  struct node *t;
  printf("Enter data to insert at any position\n");
  scanf("%d",&newnode->info);
  if(START==NULL)
  {
    printf("List is empty\n");
    //return;
  }
  else
  {
    t=START;
    while(t->link!=NULL && t->info==key)
    {
      t=t->link;
    }
    newnode->link=t->link;
    newnode->link=t;

  }
}
int main()
{
  int n,key;
  printf("Enter the number of nodes you want to create\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    insertnode();
  }
  display();
  insertbeg();
  display();
  insertend();
  display();
  printf("Enter the position\n");
  scanf("%d",&key);
  insertany(key);
  display();

  return 0;
}
