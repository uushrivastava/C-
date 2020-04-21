#include<iostream>
#include<vector>
using namespace std;
main()
{
    int n=1000,i,flag=0,d;
    cout<<"Enter the nth digit : ";
    cin>>d;
    vector <int> a;
    for(int j=1;j<=n;j++)
    {
        int count=0;
        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                count++;
                break;
            }
        }
        if(count == 0 && j != 1)
        {
            a.push_back(j);
        }

    }
cout<<a[d-1];        

}