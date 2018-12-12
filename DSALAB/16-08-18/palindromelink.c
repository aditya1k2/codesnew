#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*next;
};
struct node*start=NULL;
struct node*start1=NULL;
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
void palindrome()
{
  start1=start;
  struct node*ptr=start,*p=NULL,*prev=NULL;
  while(ptr)
  {
    p=ptr->next;
    ptr->next=prev;
    prev=ptr;
    ptr=p;
  }
  start=prev;
  ptr=start;
  while(start1!=NULL)
  {
    if(start1->data!=ptr->data)
    {
      printf("It is a not palindrome\n");
      exit(0);
    }
    start1=start1->next;
    ptr=ptr->next;
  }
  printf("\nIt is a palindrome\n");
}
int main()
{
  create();
  palindrome();
  display();
}
