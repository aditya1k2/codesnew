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
void search()
{
  if(start==NULL)
  {
      printf("MOFO\n");
  }
  else
  {
    int k;
    struct node*ptr,*preptr;
    ptr=start;
    printf("Enter the element to seach\n");
    scanf("%d",&k);
    while(ptr->data!=k)
    {
      preptr=ptr;
      ptr=ptr->next;
      if(ptr==NULL)
      {
        printf("c");
      }
    }
    preptr->next=ptr->next;
    ptr->next=start;
    start=ptr;

  }
}
int main()
{
  create();
  search();
  display();
}
