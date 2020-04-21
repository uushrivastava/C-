#include<iostream>
using namespace std;
int* leftrotate(int* arr,int n)
{
    //int *brr=new int[10];
    int x;
    x=arr[0];
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];

    }
    arr[n-1]=x;
return arr;
}

main()
{
    int *arr=new int[10];
    cout<<"enter the size of array\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"How many times you want to rotate : ";
    int d;
    cin>>d;
    for(int i=0;i<d-1;i++)
    {
    int*b=leftrotate(arr,n);
    }
    cout<<"Rotated array is :";
    int*b=leftrotate(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<*(b+i)<<" ";
    
    }
delete[] arr;
}