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
node* reverse(node** head)
{
    node *current,*temp=NULL;
    current=*head;
    while(current!=NULL)
    {
        temp=current->prev;
        current->prev=current->next;  //swap the next and prev pointer with each other;
        current->next=temp;
        current=current->prev;       //as next is swap to prev so move prev side;
    }    
    if(temp!=NULL)
    {
        *head=temp->prev;           
    }
    return *head;
}
node* addmid(node** head,int data)
{
    //int count=0;
    node *temp = *head;
    node* nn= new node();
    nn->data=data;
    if((*head)->data>=nn->data)
    {
        nn->next=*head;
        nn->next->prev=nn;
        nn->prev=NULL;
        *head=nn;
    }
    else{
    while(temp->next!=NULL && temp->next->data<nn->data)
    {
        temp=temp->next;
    }
    nn->next=temp->next;
    
    if(temp->next!=NULL)
    {
    nn->next->prev=nn;
    }
    temp->next=nn;
    nn->prev=temp;
    }
    return *head;
}
main()
{
    node* head=NULL;
    addend(&head,6);
    print(head);
    addbeg(&head,4);
    print(head);
    addbeg(&head,3);
    print(head);
    addbeg(&head,2);
    print(head);
    addbeg(&head,1);
    print(head);
    addbeg(&head,0);
    print(head);
    addend(&head,7);
    print(head);
    addend(&head,8);
    print(head);
    addend(&head,9);
    print(head);
    head = addmid(&head,5);
    print(head);
    head=reverse(&head);
    print(head);
}