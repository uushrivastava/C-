#include<iostream>
#include<climits>
using namespace std;
int printsecondlargest(int *arr , int n)
{
    int first,second;
    first=second=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
        {
            second=arr[i];

        }
    }
    return second;


}
main()
{
    int arr[10],n;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Start entering the element in arrary ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x=printsecondlargest(arr,n);
    if(x==INT_MIN)
    {
        cout<<"There is no second largest element";
    }
    else {
        cout<<"The second largest element in the given array is : "<<x;

    }

}