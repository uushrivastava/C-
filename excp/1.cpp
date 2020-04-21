using namespace std;
#include<iostream>
int main()
{
int num;
cout<<"\n Enter a positive number:";
cin>>num;
try
{
if(num==0){

throw("ZERO");
}
else if(num<0){
throw num;
}
else cout<<num;
}
catch(int num)
{
cout<<"\nthe number "<<num<<"is negative";
}
catch(char* txt)
{
cout<<"\n the number is "<<txt;
}
cout<<"\nEXITING MAIN\n";

return 0;
}


