#include<iostream>
#include<vector>
using namespace std;

vector <int> repandmiss(const vector <int> &A)
{
    int N=A.size();
    int x=0; //varialble to collect repeating number
    int y=0; //variable to collect missing number
    int getbit=0;
    vector <int> v;
    int xor1=A[0];

    for(int i=1;i<N;i++)
    {
        xor1=xor1^A[i];
    }
    for(int i=1;i<=N;i++)
    {
        xor1=xor1^i;
    }
    getbit=xor1 & ~(xor1-1);

    for(int i=0;i<N;i++)
    {
        if(getbit & A[i])
        {
            x=x^A[i];
        }
        else
        {
            y=y^A[i];
        }
    }
    for(int i=1;i<=N;i++)
    {
        if(getbit & i)
        {
            x=x^i;
        }
        else
        {
            y=y^i;
        }
    }
    v.push_back(x);
    v.push_back(y);
    return v;
}
main()
{
    vector <int> v ={1,2,3,5,4};
    vector <int> ans = repandmiss(v);
    cout<<" The repeating number is "<<ans[0]<<" and missting number is "<<ans[1]<<endl;
}
