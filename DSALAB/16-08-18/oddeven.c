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
void search()
{
  struct node*ptr=start,*p=start;
  while(ptr!=NULL)
  {
    if(ptr->data%2==0)
    {
        int temp=p->data;
        p->data=ptr->data;
        ptr->data=temp;
        p=p->next;
    }
    ptr=ptr->next;
  }

}
int main()
{
  create();
    search();

  display();
  return 0;
}
