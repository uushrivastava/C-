#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

int sizell(node* n)
{
    int count=0;
    while(n!=NULL)
    {
        n=n->next;
        count++;
    
    }
    return count;
}
int findMergeNode(node* head1, node* head2) {

int d;
node *temp1,*temp2;
    temp1=head1;
    temp2=head2;

    
int c1=sizell(head1);
int c2=sizell(head2);

if(c1>c2)
{
    d=c1-c2;
    for(int i=0;i<d;i++)
{
    if(temp1==NULL)
    {
        return -1;
    }
    temp1=temp1->next;
}
}
else
{
    d=c2-c1;
    for(int i=0;i<d;i++)
{
    if(temp2==NULL)
    {
        return -1;
    }
    temp2=temp2->next;
}
}


    
    while(temp1!=NULL&&temp2!=NULL)
    {
        if(temp1==temp2)
        {
            return temp1->data;
        }
        temp1=temp1->next;
        temp2=temp2->next;

    }
    return-1;

}

main()
{
    node* newNode; 
  
    /*  
        Create two linked lists  
      
        1st 3->6->9->15->30  
        2nd 10->15->30  
      
        15 is the intersection point  
    */

    // Addition of new nodes 
    node* head1 = new node(); 
    head1->data = 10; 
  
    node* head2 = new node(); 
    head2->data = 3; 
  
    newNode = new node(); 
    newNode->data = 6; 
    head2->next = newNode; 
  
    newNode = new node(); 
    newNode->data = 9; 
    head2->next->next = newNode; 
  
    newNode = new node(); 
    newNode->data = 15; 
    head1->next = newNode; 
    head2->next->next->next = newNode; 
  
    newNode = new node(); 
    newNode->data = 30; 
    head1->next->next = newNode; 
  
    head1->next->next->next = NULL; 
  
    cout << "The node of intersection is " << findMergeNode(head1, head2); 
} 
