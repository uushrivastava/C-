#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
};
ListNode* head=NULL;
ListNode* tail=NULL;
ListNode* head1=NULL;
ListNode* tail1=NULL;
void printlist(ListNode* n)
{

    while(n!=NULL)
    {
        cout<<n->val<<" ";
        n=n->next;
        
    }
}
void printlist1(ListNode* n)
{

    while(n!=NULL)
    {
        cout<<n->val;
        n=n->next;
        
    }
}

int getsize(ListNode* n)
{
    int count=0;
    while(n!=NULL)
    {
        
        n=n->next;
        count++;
    }
    return count;
}

void addnode(int n)
{
ListNode* newnode = NULL;
newnode = new ListNode();
newnode->val=n;
newnode->next=NULL;
if(head==NULL)
{
    head=newnode;
    tail=newnode;
}
else
{
    tail->next=newnode;
    tail=tail->next;
}
}
void addnode1(int n)
{
ListNode* newnode = NULL;
newnode = new ListNode();
newnode->val=n;
newnode->next=NULL;
if(head1==NULL)
{
    head1=newnode;
    tail1=newnode;
}
else
{
    tail1->next=newnode;
    tail1=tail1->next;
}
}
void addnodebeg(int x)
{
    ListNode* newnode = new ListNode();
    newnode->val=x;
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
void addnodebeg1(int x)
{
    ListNode* newnode = new ListNode();
    newnode->val=x;
    newnode->next=NULL;

    if(head1==NULL)
    {
        head1=newnode;
    }
    else
    {
        newnode->next=head1;
        head1=newnode;
    }
    
}
ListNode* reverse(ListNode* head)
{
    ListNode *current,*prev,*next;
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
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *temp1,*temp2;
        temp1=l1;
        temp2=l2;
        while(temp1!=NULL && temp2!=NULL)
        {
            temp1->val=temp1->val+temp2->val;
            //cout<<temp1->val<<endl;
            if(temp1->val>=10)
            {
                if(temp1->next==NULL)
                {
                    temp1->val=temp1->val;
                }
                else{
                temp1->val=temp1->val-10;
                temp1->next->val=temp1->next->val+1;
                }
                
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
    l1=reverse(l1);
    return l1;
}

main()
{   
    int dif;
    addnode(1);
    addnode(2);
    addnode(3);
    addnode(4);
    addnode(5);
    addnode1(1);
    addnode1(2);
    addnode1(3);
    addnode1(4);
    addnode1(5);
    addnode1(6);
    //addnode1(6);
    //ListNode *n =addTwoNumbers(head,head1);
    //printlist(n);
    cout<<endl;
    printlist1(head);
    cout<<endl;
    printlist1(head1);
    //cout<<endl;
    int s1=getsize(head);
    //cout<<endl<<s1;
    int s2=getsize(head1);
    //cout<<endl<<s2;
    if(s1>s2)
    {
        //cout<<"in here";
        dif=s1-s2;
        for(int i=0;i<dif;i++)
        {
            addnodebeg1(0);
        }
    }
    if(s2>s1)
    {
        dif=s2-s1;
        for(int i=0;i<dif;i++)
        {
            addnodebeg(0);
        }
    }
    //cout<<endl<<nn;
    //cout<<endl;
    //printlist(head);
    //cout<<endl;
    //printlist(head1);
    //cout<<endl;
    //s1=getsize(head);
    //cout<<endl<<s1;
    //s2=getsize(head1);
    //cout<<endl<<s2;
    //cout<<endl;
    head=reverse(head);
    //printlist(head);
    //cout<<endl;
    head1=reverse(head1);
    //printlist(head1);
    cout<<endl;
    ListNode *n =addTwoNumbers(head,head1);
    printlist1(n);
}