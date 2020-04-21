#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void printlist(node *head)
{
    node* temp=head;
    if(head!=NULL)
    {
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    }
}

void insertnth(node** head,int pos,int val)
{
    node* temp = *head;
    node* newnode = NULL;
    newnode = new node();
    for(int i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    newnode->data=val;
    newnode->next=temp->next;
    temp->next=newnode;
}
void insertbeg(node** head,int data)
{
    node*temp=*head;
    node* newnode=new node();
    newnode->data=data;
    newnode->next=*head;
    if(*head!=NULL)
    {
        while(temp->next!=*head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    else
    {
        newnode->next=newnode;
    }
    *head=newnode;

}
void add(node **head,int data)
{
    node* temp=*head;
    node* newnode= new node();
    newnode->data=data;
    if(*head!=NULL)
    {
        while(temp->next!=*head)
        {
            temp=temp->next;    
        }
        temp->next=newnode;
        newnode->next=*head;
    }
    else
    {
        newnode->next=newnode;
        *head=newnode;
    }
}
main()
{
    node* head=NULL;

    add(&head,1);
    add(&head,2);
    add(&head,3);
    add(&head,4);
    add(&head,5);
    insertnth(&head,6,9);
    insertbeg(&head,0);
    insertbeg(&head,-1);
    insertbeg(&head,-2);
    insertbeg(&head,-3);

    printlist(head);
}