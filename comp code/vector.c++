#include<vector>
#include<iostream>
using namespace std;
int main()
{

vector <int> a(10);

for(int i=0;i<10;i++)
{

a[i]=i;
}

cout<<a[5];

}
vector <char> arr(5);

char c=0;
while( c!='x'){
cin>>c;
arr.push_back(0);

}

for(int i=0;i<5;i++)
{
cout<<arr[i];
}


