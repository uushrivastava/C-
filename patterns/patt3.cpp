#include<iostream>
using namespace std;
main()
{
    int i,j;
    for(i=6;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}