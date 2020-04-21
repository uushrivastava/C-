#include<iostream>
#include<vector>
using namespace std;
main()
{
    vector <int> a;
    int first=0;
    int second=1;
    int n;
    cout<<"Enter the nth term of fibonacci series you want to see : ";
    cin>>n;
    int third;
    for(int i=0;i<n-2;i++)
    {
        third=first+second;
        a.push_back(third);
        first=second;
        second=third;

    }
    cout<<a[n-3];
}