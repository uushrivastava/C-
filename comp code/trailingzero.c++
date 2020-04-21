#include<iostream>
using namespace std;
int trailingzero(int n)
{
int i,count=0;
for(i=5;n/i>=1;i*=5)
{
count=count+(n/i);
}
return count;
}
main()
{

int num;
cout<<"Enter The Number\n";
cin>>num;
int c=trailingzero(num);
cout<<"The Number Of Trailing Zero(s) Are : "<<c<<endl;

}

