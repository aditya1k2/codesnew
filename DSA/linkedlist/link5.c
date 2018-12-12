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
  struct node *newnode,*ptr;
  newnode=(struct node *)malloc(sizeof(struct node *));
  int num;
  printf("-1 or data\n");
  scanf("%d",&num);
  if(start==NULL)
  {
    start=newnode;
    start->data=num;
    newnode->next=NULL;
  }
  else
  {
    ptr=start;
    while(num!=-1)
    {
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
    }
  }
}
int main()
{
  for (int i=0;i<2;i++)
   {
    create();
  }

}
