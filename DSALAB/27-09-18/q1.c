#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int st[MAX],top=-1;
void push(int val)
{
  if(top==MAX-1)
  {
    printf("Stack Overflow\n");
  }
  else
  {
    top++;
    st[top]=val;
  }
}
int pop()
{
  int val;
  if(top==-1)
  {
    printf("\nStack Underflow\n");
    return -1;
  }
  else
  {
    val=st[top];
    top--;
    return val;
  }
}
void display()
{
  if(top==-1)
  {
    printf("Stack is Empty\n");
  }
  else
  {
    for(int i=top;i>=0;i--)
    printf("%d ",st[i]);
  }
}
int peek()
{
  if(top==-1)
  {
    printf("\nStack Is Empty\n");
    return -1;
  }
  else
  {
    return(st[top]);
  }
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
                push(val);
                break;
        }
        case 2:
        {
                val=pop(st);
                if(val!=-1);
                printf("The value deleted from stack is: %d",val);
                break;
        }
        case 3:
        {
                val=peek(st);
                if(val!=-1)
                {
                  printf("The Value stored at top of stack is:%d\n",val);
                  break;
                }
        }
        case 4:
        {
                display(st);
                break;
        }
        case 5:
                exit(0);

      }
  }
  return 0;
}
