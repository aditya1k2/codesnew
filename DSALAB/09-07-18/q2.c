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
void insertnode_end()
{
	struct node *temp,*t;
	temp=createnode();
	printf("Enter the data\n");
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
/*void insert_any()
{
  struct node *temp,*t;
  int data;
  temp=createnode();
  printf("Enter the data position you want to enter\n");
  scanf("%d",&data);
  printf("Enter the data now\n");
  scanf("%d",&newnode->data);
  if(START==NULL)
	{
		printf("List Is Empty\n");
		t=START;
		temp->link=START;
		START=temp;
	}
  else
	{
		t=START;
    while(t->data==data)
    {

    }
		temp->link=START;
		START=temp;
	}

}*/
void insertnode_beg()
{
	struct node *temp,*t;
	temp=createnode();
	printf("Enter the data\n");
	scanf("%d",&temp->info);
	if(START==NULL)
	{
		printf("List Is Empty\n");
		t=START;
		temp->link=START;
		START=temp;
	}
	else
	{
		t=START;
		temp->link=START;
		START=temp;
	}



}
void deletenode_beg()
{
	struct node *r;
	if(START==NULL)
	{
		printf("List Is Empty\n");
	}
	else
	{
		r=START;
		START=START->link;
		free(r);
	}
}
void deletenode_end()
{
	struct node *r,*ptr,*t;
	ptr=START;
	t=ptr;
	if(START==NULL)
	{
		printf("List Is Empty\n");
	}
	else if(ptr->link==NULL)
	{
		START==NULL;
		free(ptr);
	}
	else
	{
		while(ptr->link==NULL)
		{
			t->link=NULL;
			free(ptr);
		}
	}

}
void countnodes()
{
	struct node *t;
	int counter=0;
	if(START==NULL)
	{
		printf("List IS Empty\n");
	}
	else
	{
		t=START;
		while(t!=NULL)
		{
			//printf("%d\n",t->info);
			t=t->link;
			counter++;
		}
		printf("Number OF Nodes Are:-%d\n",counter);
	}

}
void viewlist()
{
	struct node *t;
	if(START==NULL)
	{
		printf("List IS Empty\n");
	}
	else
	{
		t=START;
		while(t!=NULL)
		{
			printf("%d\n",t->info);
			t=t->link;
		}
	}
}
int menu()
{
	int ch;
	printf("1. Add Value To the list at end\n");
	printf("2. Add Value To the list at beg\n");
	printf("3.Delete First Value\n");
	printf("4.Delete Node At the end\n");
	printf("5.View List\n");
	printf("6.Count Number OF Nodes\n");
	printf("7.Exit\n");\
	printf("Enter your Choice\n");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	while(1)
	{
		switch(menu())
		{
			case 1:
			{
				insertnode_end();
				break;
			}
			case 2:
			{
				insertnode_beg();
				break;
			}
			case 3:
			{
				deletenode_beg();
				break;
			}
			case 4:
			{
				deletenode_end();
				break;
			}
			case 5:
			{
					viewlist();
			break;
			}
			case 6:
			{
				countnodes();
			break;
			}
			case 7:
			{
			exit(0);
			}
			default:
			{
			printf("Invalid Entry\n");
			}
		}
	}
	return 0;

}
