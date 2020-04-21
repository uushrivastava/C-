#include<iostream>
using namespace std;
int total;
int square(int x)
{
return x*x;
}
int sumofsquare(int x,int y){
int z;
z=square(x+y);
return z;
}
int main()
{
int a,b;
cout<<"enter the two numbers\n";
cin>>a>>b;
total=sumofsquare(a,b);
cout<<"the sum is:\t" <<total;
}
