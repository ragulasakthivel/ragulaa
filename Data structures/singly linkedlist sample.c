#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node n;
n *head, *temp;

void insertinfront()
{
    n *newnode;
    int no;
    newnode=(n*)malloc(sizeof(n));
    scanf("%d",&no);
    newnode->data=no;
    newnode->next=NULL;
    if(head==NULL)
      head=newnode;
    else
    {
       newnode->next=head;
       head=newnode;
    }
}

void insertatend(n *temp)
{   
    
    n *newnode;
    int no=99;
    newnode=(n*)malloc(sizeof(n));
    newnode->data=no;
    newnode->next=NULL;
    while(temp->next!=NULL)
    {
     temp=temp->next;   
    }
    temp->next=newnode;
    temp=newnode;
    
}


void display()
{
  temp=head;
  while(temp!=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }printf("\n");
  
}

void deleteinfront(n *temp)
{
    head=temp->next;
     free(temp);
}

void deletenode()
{ 
  n *pnode;
  temp=head;
  while(temp->next!=NULL)
  {
   pnode=temp;   
   temp=temp->next;
  }
  pnode->next=NULL;
  free(temp);
  
}

int main(void)
{
   int count=0;
   int size=5;
   while(size!=count)
   {
       insertinfront();
       count++;
   }
insertatend(head);    
display();
deleteinfront(head);
//deletenode();
display();
}




