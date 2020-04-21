#include<bits/stdc++.h>
using namespace std;
int* usersort(int arr[] ,int n)
{
    int c,d;
    sort(arr,arr+n);
    int *a=new int[n];
    for(int i=0;i<n/2;i++)
    {
        //cout<<arr[i]<<" ";
        a[i]=arr[i];
        c=i;
    }
    d=c+1;
    for(int j=n-1;j>=n/2;j--)
    {
        //cout<<arr[j]<<" ";
        a[d]=arr[j];
        d++;
    }

    return a;
    /*for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
}



main()
{
int arr[100];
int n;
cout<<"Enter how many elements you want to enter\n";
cin>>n;

cout<<"Enter the "<<n<<" Elements\n";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}      
    
    int *b=usersort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<*(b+i)<<" ";
    }
}