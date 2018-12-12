#include<stdio.h>
#include<stdlib.h>
struct BSTNODE
{
  struct BSTNODE *left;
  struct BSTNODE *right;
  int data;
};
struct BSTNODE *root=NULL;
void insert(struct BSTNODE *root,int data)
{
  struct BSTNODE *par;
  struct BSTNODE *n=malloc(sizeof(struct BSTNODE));
  n->left=NULL;
  n->data=data;
  n->right=NULL;
  if(root==NULL)
  root=n;
  else{
    par=root;
    while(par!=NULL)
    {
      if(par->data>data){
        if(par->left==NULL)
          par->left=n;
          par=par->left;

      }
      else if(par->data<data)
      {
        if(par->right==NULL)
          par->right=n;
        par=par->right;
      }
    }
  }
}
int main()
{
  int value;

  for(int i=0;i<10;i++)
  {
    scanf("%d",&value);
    insert(root,value);
  }
  return 0;
}
