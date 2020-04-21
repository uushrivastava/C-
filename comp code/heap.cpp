#include<iostream>
using namespace std;
void heapsort(int arr[],int n);
void heapify(int arr[],int n,int i);
void swap(int &a,int &b){
int temp;
temp=a;
a=b;
b=temp;
}

void heapify(int arr[],int n,int i)
{
int l,r,largest;
largest=i;
l=2*i+1;
r=2*i+2;

if(l<n&&arr[l]>arr[largest])
largest=l;
if(r<n&&arr[r]>arr[largest])
largest=r;
if(largest !=i)
{
swap(arr[i],arr[largest]);
heapify(arr,n,largest);
}
}

void heapsort(int arr[],int n){
int i;
for(i=n/2-1;i>=0;i--)
heapify(arr,n,i);
for(i=n-1;i>=0;i--)
{
swap(arr[0],arr[i]);
heapify(arr,i,0);
}
}

int main(){

int n,i;
cout<<"enter how many elements\n";
cin>>n;
int arr[n];

//cout<<"enter the array elements\n";
for(i=0;i<n;i++)
{
//cin>>arr[i];
arr[i]=rand()%100;
}

cout<<"array before sorting\n";
for(i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}
cout<<"\narray after sorting is\n";
heapsort(arr,n);

for(i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}

cout<<"\nmax element is "<<arr[n-1];
cout<<"\nmin element is "<<arr[0];
return 0;
}

