#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* head=NULL;
node* tail=NULL;
void deletenth(int pos)
{

    node* temp=head;
    node* nn=NULL;
    for(int i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    nn=temp->next;
    temp->next=nn->next;
    delete nn;
}
void insertnth(int pos,int val)
{
    node* temp = head;
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
int printlist(node* n)
{
    int count=0;
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
        count++;
    }
return count;
}
void addnode(int n)
{
node* newnode = NULL;
newnode = new node();
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
    int no,x,pos,val,pos1;
    char ch;
    cout<<"Enter how many nodes you want to add\n";
    cin>>no;
    for(int i=0;i<no;i++)
    {   
        cout<<"Enter the value for node "<<i+1<<endl;
        cin>>x;
        addnode(x);
    }
    int n=printlist(head);
    cout<<"\nTotal number of nodes are :"<<n;

    cout<<"\nDo you want to insert at nth position (y/n)\n";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"Enter the postion where you want to enter:\n";
        cin>>pos;
        if(pos>n)
        {
            cout<<"list does not contain"<<pos<<"elements hence you cannot add\n";
            exit(1);
        }
        cout<<"Enter the number you want to enter:\n";
        cin>>val;
        insertnth(pos,val);
        n=printlist(head);
        cout<<"\nTotal number of nodes are :"<<n;
    }
     cout<<"\nDo you want to delete element at nth position (y/n)\n";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"Enter the postion where you want to delete:\n";
        cin>>pos1;
        if(pos1>n)
        {
            cout<<"list does not contain"<<pos1<<"elements hence you cannot delete\n";
            exit(1);
        }
        else
        {
        deletenth(pos1);
        }
        n=printlist(head);
        cout<<"\nTotal number of nodes are :"<<n;
    }

}