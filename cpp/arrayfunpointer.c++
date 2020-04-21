#include<iostream>
using namespace std;
int sum(int a[])
{
int i,sum=0;
for(i=0;i<5;i++)
{
sum+=a[i];
}
return sum;
}
int main()
{
int a[]={1,2,3,4,5};
int total=sum(a);
cout<<total;
return 0;
 
}

