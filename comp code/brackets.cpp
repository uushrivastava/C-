#include<iostream>
#include<string.h>
using namespace std;
int calcbracket(char *arr,int n)
{
    int co=0,cc=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp((arr+i),"(")==0)
        {
            co=co+1;
            cout<<"open";
        }
        else if(strcmp((arr+i),")")==0)
        {
            co=co-1;
            cc++;
            cout<<"close";
        }
    }
return (cc);
}
main()
{
    char arr[10];
    int n=10;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }*/
    //int n=sizeof(arr)/sizeof(arr[0]);
    int x=calcbracket(arr,n);
    cout<<x;
}
