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
  int num;
  printf("Enter -1 to end\n");
  printf("Enter the data\n");
  scanf("%d",&num);
  while(num!=-1)
  {
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    if(start->data==num)
    {
      newnode->next=NULL;
      start=newnode;
    }
    else
    {
      ptr=start;
      ptr->next=newnode;
      while(ptr->next!=NULL)
      {
        ptr->next=newnode;
        ptr=ptr->next;
      }
      newnode->next=NULL;
    }
      printf("Enter the data\n");
      scanf("%d",&num);
  }
int main()
{
  create();
  return 0;
}

}
