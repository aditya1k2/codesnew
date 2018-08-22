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
void del_bef()
{
  int num;
  struct node*ptr=start;
  struct node*preptr=start;
  printf("Enter the element to delete before\n");
  scanf("%d",&num);
  if(start==NULL)
  {
    printf("DATA UNDERFLOW\n");
  }
  else if(start->data==num)
  {
    printf("THERE IS NO ELEMENT BEFORE IT.\n");
  }
  else if((ptr->next)->data==num)
  {
    //struct node*a=((ptr->next)->next);
    start=ptr->next;
    free(ptr);
  }
  else
  {
    while((ptr->next)->data!=num)
    {
      preptr=ptr;
      ptr=ptr->next;
      if(ptr==NULL)
      {
        printf("ENTERED A WRONG DATA \n");
        return;
      }
    }
    struct node*a=(ptr->next)->next;
    preptr->next=ptr->next;
    free(ptr);
  }
}
void del_aft()
{
  int num;
  struct node*ptr=start;
  struct node*preptr=start;
  printf("Enter the element to delete after\n");
  scanf("%d",&num);
  if(start==NULL)
  {
    printf("DATA UNDERFLOW\n");
  }
  else
  {
    while((ptr->next)->data!=num)
    {
      ptr=ptr->next;
      if(ptr==NULL)
      {
        printf("ENTERED A WRONG DATA \n");
        return;
      }
    }
    struct node*a=(ptr->next)->next;
    (ptr->next)->next=(a->next);
    free(a);
  }
}
int main()
{
  int num;
  create();
  printf("1.Deleting before\n 2.deleting after.\n");
  scanf("%d",&num);
  switch(num)
  {
      case 1:{del_bef();break;}
      case 2:{del_aft();break;}
  }
  display();
  return 0;
}
