#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
node* head=NULL;
node* tail=NULL;
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
    int no,x;
    cout<<"Enter how many nodes you want to add\n";
    cin>>no;
    for(int i=0;i<no;i++)
    {   
        cout<<"Enter the value for node "<<i+1<<endl;
        cin>>x;
        addnode(x);
    }
    /*addnode(1);
    addnode(2);
    addnode(3);
    addnode(4);
    addnode(5);*/
    int n=printlist(head);
    cout<<"\nTotal number of nodes are :"<<n;

}