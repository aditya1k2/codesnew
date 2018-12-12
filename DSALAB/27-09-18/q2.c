#include<stdio.h>
#include<stdlib.h>
struct stack{
  int data;
  struct stack *next;
};
struct stack *top=NULL;
struct stack* push(struct stack *top,int val)
{
  struct stack *ptr;
  ptr=(struct stack*)malloc(sizeof(struct stack));
  ptr->data=val;
  if(top==NULL)
  {
    ptr->next=NULL;
    top=ptr;
  }
  else
  {
    ptr->next=top;
    top=ptr;
  }
  return top;
}
struct stack* display(struct stack *top)
{
  struct stack *ptr;
  ptr=top;
  if(top==NULL)
  printf("Stack Is Empty\n");
  else
  {
    while(ptr!=NULL)
    {
      printf("%d ",ptr->data);
      ptr=ptr->next;
    }
  }
  return top;
}
struct stack *pop()
{
  struct stack *ptr;
  ptr=top;
  if(top==NULL)
  printf("Stack Underflow\n");
  else
  {
    top=top->next;
    printf("The value being deleted is:%d",ptr->data);
    free(ptr);
  }
  return top;
}
int peek(struct stack *top)
{
  if(top==NULL)
  return -1;
  else
  return top->data;
}
int menu()
{
  int ch;
  printf("\n*******Enter The Options*********\n");
  printf("1.Push\n");
  printf("2.Pop\n");
  printf("3.Peek\n");
  printf("4.Display\n");
  printf("5.Exit\n");
  scanf("%d",&ch);
  return ch;
}
int main()
{
  int val,op;
  while(1)
  {

      switch(menu())
      {
        case 1:
        {
                printf("Enter the number you want to pushin the stack\n");
                scanf("%d",&val);
                push(top,val);
                break;
        }
        case 2:
        {
                top=pop(top);
                if(val!=-1);
                printf("The value deleted from stack is: %d",val);
                break;
        }
        case 3:
        {
                val=peek(top);
                if(val!=-1)
                {
                  printf("The Value stored at top of stack is:%d\n",val);
                  break;
                }
        }
        case 4:
        {
                top=display(top);
                break;
        }
        case 5:
                exit(0);
      }
  }
  return 0;
}
