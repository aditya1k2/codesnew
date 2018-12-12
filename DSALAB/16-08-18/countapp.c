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
void count()
{
  struct node*ptr,*p;
  ptr=start;
  	for(ptr=start ; ptr->next != NULL; ptr = ptr->next)
  	{
  		for(p=ptr->next; p!= NULL;p=p->next)
  		{
  			if(ptr->data > p->data)
  			{
  				int temp = ptr->data;
  				ptr->data = p->data;
  				p->data = temp;
  			}
  		}
    }
   int pi=1;
    ptr=start;
    while (ptr->next != NULL)
  {
     if (ptr->data == ptr->next->data)
     {
        pi++;
     }
    else
      {printf("\nNumber of occurence %d is %d\n",ptr->data,pi);pi=1;}
        ptr=ptr->next;
  }
    printf("\nNumber of occurence %d is %d\n",ptr->data,pi);
}
int main()
{
  create();
  count();

}
