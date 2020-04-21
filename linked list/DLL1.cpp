#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
};

void addbeg(node** head, int data)
{
    node* temp=*head;
    node* newnode = new node();
    newnode->data=data;
    newnode->next=*head;
    newnode->prev=NULL;
    if(*head!=NULL)
    {
        (*head)->prev=newnode;
    }
    *head=newnode;
}
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void addend(node** head,int data)
{
    node* temp=*head;
    node* newnode= new node();
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(*head!=NULL)
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
    else
    {
        *head=newnode;
    }
    

}
main()
{
    node* head=NULL;
    addend(&head,0);
    print(head);
    addbeg(&head,1);
    print(head);
    addbeg(&head,2);
    print(head);
    addbeg(&head,3);
    print(head);
    addbeg(&head,4);
    print(head);
    addbeg(&head,5);
    print(head);
    addend(&head,6);
    print(head);
    addend(&head,7);
    print(head);
    addend(&head,8);



    print(head);
}