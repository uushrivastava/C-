#include<iostream>
#include<vector>
using namespace std;
main()
{
    vector <int> v1 ;
    int n;
    cout<<"Enter the size\n";
    cin>>n;
    int x;
    cout<<"Start entering the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    cout<<"Your created vector is : ";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }

    vector <int> :: iterator itr = v1.begin();
    cout<<"\nAfter inserting element at 4 positionn\n ";
    v1.insert(itr+4,1,25);
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }

    cout<<"\nAfter deleting 8th element from the vector\n ";
    v1.erase(v1.begin()+8-1);
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    
}