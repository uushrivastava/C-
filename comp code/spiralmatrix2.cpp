#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int** spiralmatrix(int a)
{
    int T=0;
    int B=a-1;
    int L=0;
    int R=a-1;
    int dir=0;
    int k=0;
    int n=a;
    vector <int> v;
    for(int i=1;i<=(a*a);i++)
    {
        v.push_back(i);
    }
    int** A= new int*[n];
    for(int i=0;i<n;i++)
    {
        A[i]=new int[n];
    } 
    while(T<=B&&L<=R)
    {
        if(dir==0)
        {
            for(int i=L;i<=R;i++)
            {
                A[T][i]=v[k];
                k++;
            }
            T++;
        }
        if(dir==1)
        {
            for(int i=T;i<=B;i++)
            {
                A[i][R]=v[k];
                k++;
            }
            R--;
        }
        if(dir==2)
        {
            for(int i=R;i>=L;i--)
            {
                A[B][i]=v[k];
                k++;
            }
            B--;
        }
        if(dir==3)
        {
            for(int i=B;i>=T;i--)
            {
                A[i][L]=v[k];
                k++;
            }
            L++;
        }
        dir=(dir+1)%4;

    }

return A;
}
main()
{
    int n;
    cout<<"Enter the size:\n";
    cin>>n;      
    int**ARR=spiralmatrix(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ARR[i][j]<<" ";
        }
        cout<<endl;
    }
    
}