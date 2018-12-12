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
  printf("Data Is In The Following Order\n");
  struct node*ptr=start;
  while(ptr!=NULL)
  {
    printf("%d\t",ptr->data);
    ptr=ptr->next;
  }
}
void rev()
{
  printf("Data Is In The Reversed Order\n");
  struct node*ptr=start;
  while(ptr->next!=NULL)
  {
    ptr=ptr->next;
  }
  while(ptr!=start)
  {
      printf("%d",ptr->data);
      ptr=ptr->prev;
  }
}
void add(int a)
{
  struct node*newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data\n");
  scanf("%d",&newnode->data);
  if(a==1)
  {
    newnode->next=start;
    start->prev=newnode;
    start=newnode;
    newnode->prev=NULL;
  }
  else if(a==2)
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
  else
  {
    struct node*ptr=start;
    for(int i=1;i<a-1;i++)
    {
      ptr=ptr->next;
      if(ptr==NULL)
      {
        printf("PLEASE LEAVE OR I HAVE TO...\n");
        exit(0);
      }
    }
    newnode->next=ptr->next;
    ptr->next->prev=newnode;
      ptr->next=newnode;
      newnode->prev=ptr;
  }
}
void del(int a)
{
  if(a==1)
  {
    if(start==NULL)
    {
      printf("LINK EMPTY\n");
      return;
    }
    struct node*ptr=start;
    start=start->next;
    free(ptr);
  }
  else if(a==2)
  {
    if(start==NULL)
    {
      printf("LINK EMPTY\n");
      return;
    }
    struct node*ptr=start;
    while(ptr->next==NULL)
    {
      ptr=ptr->next;
    }
    free(ptr->next);
    ptr->next=NULL;
  }
  else
  {
    if(start==NULL)
    {
      printf("LINK EMPTY\n");
      return;
    }
    struct node *ptr=start,*p;
    for(int i=1;i<a-1;i++)
  {
    ptr=ptr->next;

  }
  p=ptr->next;
  ptr->next->next->prev=ptr;
  ptr->next=ptr->next->next;
  free(p);
  }
}
void count()
{
  struct node*ptr=start;
  int count=0;
  while(ptr!=NULL)
  {
    count++;
    ptr=ptr->next;
  }
  printf("Presently there are %d number of nodes\n",count);
}
void search(int num)
{
  int pos=0;
  struct node*ptr=start;
  while(ptr->data!=num)
  {
    ptr=ptr->next;
    pos++;
    if(ptr==NULL)
    {
      printf("element not found\n");
    }
  }
  printf("Position is %d\n",pos+1);
}
int main()
{
  create();int a,n;
  while(1)
  {

        printf("\nEnter your choice:-\n 1.insert at the begining \n 2.insert node at end \n 3.insert a node at any position\n");
        printf(" 4.Del a node at beg\n 5.del a node at end\n 6.del a node at any pos\n 7.traverse forward\n 8.traverse backword\n 9.count nodes");
        printf("\n 10 Search for an element\n 11.exit\n");
        scanf("%d",&a);
        switch(a)
        {
          case 1:{ add(1);break;}
          case 2:{add(2);break;}
          case 3:{printf("Enter the position\n"); scanf("%d",&n);add(n);break;}
          case 4:{del(1);break;}
          case 5:{del(2);break;}
          case 6:{printf("Enter the position\n"); scanf("%d",&n);del(n);break;}
          case 7:{display();break;}
          case 8:{rev();break;}
          case 9:{count();break;}
          case 10:{printf("Enter the elemnt to search\n"); scanf("%d",&n);search(n);break;}
          case 11:{exit(0);}
        }
}
}
