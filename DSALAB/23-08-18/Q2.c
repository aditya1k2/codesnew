#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*next;
  struct node*prev;
};
struct node*start=NULL;
void create()
{
  int num;
  while(num!=-1)
  {
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data\n");
        scanf("%d",&newnode->data);
        if(start==NULL)
        {
          start=newnode;
          start->next=NULL;
          start->prev=NULL;
        }
        else
        {
          struct node*ptr=start;
          while(ptr->next!=NULL)
          {
            ptr=ptr->next;
          }
          ptr->next=newnode;
          newnode->prev=ptr;
          newnode->next=NULL;
        }
        printf("Enter -1 to leave\n");
        scanf("%d",&num);
      }
}
void display()
{
  struct node*ptr=start;
  while(ptr!=NULL)
  {
    printf("%d\t",ptr->data);
    ptr=ptr->next;
  }
}
void rev()
{
  struct node *ptr = NULL;
     while (start !=  NULL)
     {
       ptr = start->prev;
       start->prev = start->next;
       start->next = ptr;
       start = start->prev;
     }
     if(ptr != NULL )
        start = ptr->prev;
}
int main()
{
  create();
  display();
  rev();
  printf("\n----------------------\nAfter Conversion\n----------------------\n");
  display();
}
