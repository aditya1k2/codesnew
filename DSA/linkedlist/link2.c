#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *link;
};
struct node *START=NULL;
int main()
{
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  struct node *ptr;
  START=newnode;
  ptr=START;
  newnode->link=NULL;
  printf("Enter Data\n");
  scanf("%d",&newnode->data);
  while(ptr->link!=NULL)
  {
    printf("Hello\n");
    ptr=ptr->link;
  }
  printf("You Entered %d\n",newnode->data);
  return 0;
}
