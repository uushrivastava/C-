#include<bits/stdc++.h>
#include<iostream>
#include<set>
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

bool detectloop(node* h)
{
    unordered_set <node*> s;
    while(h!=NULL)
    {
        if(s.find(h)!=s.end())
        return true;

        s.insert(h);
        h=h->next;
    }

    return false;
}

main()
{
    addnode(10);
    addnode(20);
    addnode(30);
    addnode(40);
    addnode(50);

    head->next->next->next->next=head;

    if(detectloop(head))
    {
        cout<<"loop found\n";
    }
    else
    {
        cout<<"loop does not found\n";
    }
    
}