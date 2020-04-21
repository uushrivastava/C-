#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
node* head=NULL;
node* tail=NULL;
void addnodebeg(int x)
{
    node* newnode = new node();
    newnode->data=x;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
    
}
int print(node* n)
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
main()
{
    int no,x;
    cout<<"Enter how many nodes you want to add\n";
    cin>>no;
    for(int i=0;i<no;i++)
    {   
        cout<<"Enter the value for node "<<i+1<<endl;
        cin>>x;
        addnodebeg(x);
    }
    
    int n=print(head);
    cout<<"\nTotal number of nodes are :"<<n;

}