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
  int num=1,num1;
  struct node*ptr;
  while(num!=-1)
  {
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&num1);
    newnode->data=num1;
    if(start==NULL)
    {
      newnode->next=newnode;
      start=newnode;
    }
    else
    {
      ptr=start;
      while(ptr->next!=start)
      {
        ptr=ptr->next;
      }
      ptr->next=newnode;
      newnode->next=start;
    }
    printf("Enter -1 to leave\n");
    scanf("%d",&num);
  }
}
void display()
{
    struct node*ptr=start;
    if(start==NULL)
    {
      printf("DATA UNDERFLOW\n");
    }
    else
    {
      printf("\n");
      while(ptr->next!=start)
      {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
      }
      printf("%d\t\n",ptr->data);
    }
}
void before()
{
  int a;
  struct node*ptr=start,*preptr=start,*q=start,*s;
  printf("Enter the element\n");
  scanf("%d",&a);
  while(q->next!=start)
  {
    s=q;
    q=q->next;
  }
  if(start->data==a)
  {
    s->next=start;
    free(q);
  }
  else if((start->next)->data ==a)
  {
    q->next=start->next;
    start=start->next;
    free(ptr);
  }
  else
  {
      while((ptr->next)->data!=a)
      {
        preptr=ptr;
        ptr=ptr->next;
      }
      preptr->next=(preptr->next)->next;
      free(ptr);
  }
}
void after()
{
  int a;
  struct node*ptr=start,*preptr,*q=start,*s;
  printf("Enter the element\n");
  scanf("%d",&a);
  while(q->next!=start)
  {
    s=q;
    q=q->next;
  }
  if(q->data==a)
  {
    q->next=start->next;
    start=start->next;
    free(ptr);
  }
  else if(s->data==a)
  {
    s->next=start;
    free(q);
  }
  else
  {
    while(ptr->data!=a)
    {
      ptr=ptr->next;
    }
    preptr=ptr->next;
    ptr->next=(ptr->next)->next;
    free(preptr);
  }
}
int main()
{
create();
display();
int m;
while(1)
{
printf("\n1.DELETE AN ELEMENT BEFORE AN ELEMENT\n2. DELETE AN ELEMENT AFTER AN ELEMENT\n 3.DISPLAY 4.EXIT\n");
scanf("%d",&m);
switch(m)
{
  case 1:{ before();break;}
  case 2:{after();break;}
  case 3:{display();break;}
  case 4:{exit(0);}
}
}
return 0;
}
