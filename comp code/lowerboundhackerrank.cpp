#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
main()
{
    int n,t,x;
    vector <int> v;
    vector <int> v2;
    cout<<"enter how many elements\n";
    cin>>n;
    cout<<"\nstart entering the element\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"\nenter how many testcases\n ";
    cin>>t;
    for(int i=0;i<t;i++)
{
    cin>>x;
    v2.push_back(x);
}
vector <int> :: iterator low;
for(int i=0;i<t;i++)
{
    if(binary_search(v.begin(),v.end(),v2[i]))
    {
        cout<<"YES";
        low=lower_bound(v.begin(),v.end(),v2[i]);
        cout<<" "<<((low-v.begin())+1)<<endl;
    }
    else
    {
        cout<<"NO";
        low=lower_bound(v.begin(),v.end(),v2[i]);
        cout<<" "<<((low-v.begin())+1)<<endl;
    }
}
    

}