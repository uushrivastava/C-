#include<iostream>
using namespace std;
main()
{
    int n;
   
    cout<<"enter the number : ";
    cin>>n;
     int t=n;
    int fact=1;
    while(n!=0)
    {
        fact*=n;
        n--;
    }
    cout<<"factorial of number "<<t<<" is :"<<fact;
    
}