#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *START=NULL;
struct node* createnode()
{
  struct node *n;
  n=(struct node*)malloc(sizeof(struct node));
  return(n);
}
void insertnode()
{
  struct node *temp,*t;
  temp=createnode();
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
void deletenode()
{
  struct node *r;
  if(START==NULL)
  {
    printf("List Is Empty\n\n\n");
  }
  else
  {
    r=START;
    START=START->link;
    free(r);
  }
}
void viewlist()
{
  struct node *t;
  if(START==NULL)
  printf("List Is Empty\n\n\n");
  else
  {
    t=START;
    while (t!=NULL)
     {
       printf("%d\n ",t->info);
       t=t->link;
     }
  }
}
int menu()
{
  int ch;
  printf("1.Add value to the list\n");
  printf("2.Delete first value\n");
  printf("3.View List\n");
  printf("4.Exit\n\n");
  printf("Enter Your Choice\n");
  scanf("%d",&ch);
  return ch;
}
int main()
{
  while(1)
  {
    switch (menu())
     {
      case 1:{
        //createnode();
        insertnode();
        break;
      }
      case 2:{
        deletenode();
        break;
      }
      case 3:{
        viewlist();
        //printf("fdgbvd\n");
        break;
      }
      case 4:
      {
        exit(0);
      }
      default:
      printf("Invalid Entry\n");
    }
  }
    return 0;
}
