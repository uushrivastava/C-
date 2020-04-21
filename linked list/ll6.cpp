#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* head=NULL;
node* tail=NULL;
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
node* reverse (node* head)
{
    node *current,*prev,*next;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;   
    }
    head=prev;
    return head;
}
int getnode(node* head,int poss)
{
    int count=0;
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    int x=count-poss;
    temp=head;
    for(int i=0;i<x-1;i++)
    {
        temp=temp->next;
    }
    int z=temp->next->data;
    return z;

}
main()
{
    int no,x;
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
    cout<<"\nTotal number of nodes are :"<<n<<endl;

    int nod=getnode(head,3);
    cout<<endl<<nod;

    //head=reverse(head);
    //n=printlist(head);
    //cout<<"\nTotal number of nodes are :"<<n;

}