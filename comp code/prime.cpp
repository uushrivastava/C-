#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter the numbers : ";
    cin>>n;

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
        cout<<"it ";
        flag=1;
        break;
        }

    }
    if(flag==1)
    cout<<"is a not prime number\n";
    else
    {
        cout<<"it is  a prime number\n";
    }
    
}