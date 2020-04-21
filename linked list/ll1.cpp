#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* head=NULL;
node* tail=NULL;
void printlist(node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
void addnode(int n)
{
node* newnode= new node();
newnode->data=n;
newnode->next=NULL;
if(head==NULL)
{
    head=newnode;
    tail=newnode;
}
else
{
    tail->next=newnode;
    tail=newnode;
}
}
main()
{
    /*node* head=NULL;
    node* second=NULL;
    node* third=NULL;

    head=new node();
    second=new node();
    third=new node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;
    */

    addnode(1);
    addnode(2);
    addnode(3);
    addnode(4);
    addnode(5);
    printlist(head);

}