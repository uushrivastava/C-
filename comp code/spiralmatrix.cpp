#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
void spiralmatrix(int A[1][1],int m,int n)
{
    int T=0;
    int B=m-1;
    int L=0;
    int R=n-1;
    int dir=0;
    while(T<=B&&L<=R)
    {
        if(dir==0)
        {
            for(int i=L;i<=R;i++)
            {
                cout<<A[T][i]<<",";
            }
            T++;
        }
        if(dir==1)
        {
            for(int i=T;i<=B;i++)
            {
                cout<<A[i][R]<<",";
            }
            R--;
        }
        if(dir==2)
        {
            for(int i=R;i>=L;i--)
            {
                cout<<A[B][i]<<",";
            }
            B--;
        }
        if(dir==3)
        {
            for(int i=B;i>=T;i--)
            {
                cout<<A[i][L]<<",";
            }
            L++;
        }
        dir=(dir+1)%4;

    }

}
main()
{
    /*int A[][4]={{1,2,3,4},
                {12,13,14,5},
                {11,16,15,6},
                {10,9,8,7}};
                */
         int A[1][1]={{1}};      
        spiralmatrix(A,1,1);
}