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
main()
{
    int n,nodevalue,choice,pos,count;
    cout<<"Enter how many elements you want to enter in a list\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value for node "<<i+1<<endl;
        cin>>nodevalue;
        addnode(nodevalue);
    }
    char ch;
    cout<<"Do you want to continue?(y/n)\n";
    cin>>ch;
    while(ch=='y')
    {
        cout<<"\n1. insert node at the end of the list\n";
        cout<<"2. insert node at the begining of the list\n";
        cout<<"3. insert node at Nth position\n";
        cout<<"4. delete node at Nth position\n";
        cout<<"5. reverse the list and count the element\n";
        cout<<"6. display the linked list and count the elment\n";
        cout<<"7. EXit \n";
        cout<<"Enter your choice\n";
        cin>>choice;

        switch(choice)
        {
            case 1 : cout<<"Enter the value";
                     cin>>nodevalue;
                     addnode(nodevalue);
                     break;
            case 2 : cout<<"Enter the value";
                     cin>>nodevalue;
                     addnodebeg(nodevalue);
                     break;
            case 3 : cout<<"Enter the postion where you want to enter:\n";
                     cin>>pos;
                     if(pos>n)
                     {
                         cout<<"list does not contain"<<pos<<"elements hence you cannot add\n";
                         exit(1);
                     }
                     cout<<"Enter the number you want to enter:\n";
                     cin>>nodevalue;
                     insertnth(pos,nodevalue);
                     break;
            case 4 : cout<<"Enter the postion where you want to delete:\n";
                     cin>>pos;
                     if(pos>n)
                     {
                         cout<<"list does not contain"<<pos<<"elements hence you cannot delete\n";
                         exit(1);
                     }
                     else
                     {
                     deletenth(pos);
                     }
                     break;
            case 5 : head=reverse(head);
                     count=printlist(head);
                     cout<<"\nTotal number of nodes are :"<<count<<endl;
                     break;
            case 6 : count=printlist(head);
                     cout<<"\nTotal number of nodes are :"<<count<<endl;
                     break;
            case 7 : exit(1);
            default : cout<<"You have entered the wrong input please try again\n";
                      break;
        };             

    }

}