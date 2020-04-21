#include<iostream>
using namespace std;
/*int usersort(int arr[], int n)
{
for (int i = 0; i < n/2; i++)      
{      
  
    for (int j = 0; j < n/2-i-1; j++)  
        {
	if (arr[j] > arr[j+1]) 
	{
	int temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	}
 }
}

for (int i = n/2+1; i < n; i++)      
{      
  
    for (int j = 0; j < n-i-1; j++)  
        {
	if (arr[j] > arr[j+1]) 
{
	int temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	}
 }
}

return *arr;
}*/
main()
{
int arr[20];
int brr[20];
int n;
cout<<"enter how many elements\n";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}

for (int i = 0; i < n/2; i++)      
{      
  
    for (int j = 0; j < n/2-i-1; j++)  
        {
	if (arr[j] > arr[j+1]) 
	{
	int temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	}
 }
}

for (int i = n/2+1; i < n; i++)      
{      
  
    for (int j = 0; j < n-i-1; j++)  
        {
	if (arr[j] > arr[j+1]) 
{
	int temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	}
 }
}

//*brr=usersort(arr,n);
for(int i=0;i<n;i++)
{
cout<<arr[i];
}
}
