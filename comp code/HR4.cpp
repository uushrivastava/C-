#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,x,y,z,count=0,i,flag=0;
    vector <int> A;
    vector <int> B;
    vector <int> C;

    //cout<<"enter the test cases\n";
    cin>>t;
        if(t<0||t>100)
            {
                flag=1;
            }
    while(t>0)
    {
        cout<<endl;
        //cout<<"enter the no. of elements\n";
        cin>>n;
        if(n<7||n>100)
            {
                flag=1;
            }
        //cout<<"enter the elements\n";
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>7||x<0)
            {
                flag=1;
            }
            A.push_back(x);
        
        }
        if(n%2==0)
        {
            y=n/2;
        }
        else{
            y=n/2+1;
        }
        i=0;
        for(int j=y;j<A.size();j++)
        {
            x=A[j];
            B.push_back(x);
        }
        z=B.size();
        for(i=0;i<=A.size()/2;i++)
        {
            if(A[i]==B[z-1])
            {
                count++;
                z=z-1;
            }
        }
        if(count==B.size())
        {
            if(flag==1)
            {
                C.push_back(0);
                //cout<<"NO";
            }
            else
            {
               C.push_back(1);
               //cout<<"YES"; 
            }    
        }
        else
        {
            C.push_back(0);
            //cout<<"NO";
        }
        
    t=t-1;
    }
    for(i=0;i<C.size();i++)
    {
        if(C[i]==0)
        {
            cout<<endl;
            cout<<"NO";
        }
        else if(C[i]==1)
        {
            cout<<endl;
            cout<<"YES";
        }
    }
} 