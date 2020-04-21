#include<stdio.h>
#include<stdlib.h>

int** generateMatrix(int A) {
    
    //*len1= *len2 = A;
    int T=0;
    int B= A-1;
    int L=0;
    int R= A-1;
    int dir=0;
    int k=0;
    int n=A;
    int x=A*A;
    int v[3];
    int i;
    for(i=0;i<x;i++)
    {
        v[i]=i+1;
    }
    int **a = (int**)malloc(A*sizeof(int*)) ; 
    for (i=0; i<A; i++) 
         a[i] = (int *)malloc(A * sizeof(int)); 
         
        while(T<=B&&L<=R)
    {
        if(dir==0)
        {
            for(i=L;i<=R;i++)
            {
                a[T][i]=v[k];
                k++;
            }
            T++;
        }
        if(dir==1)
        {
            for(i=T;i<=B;i++)
            {
                a[i][R]=v[k];
                k++;
            }
            R--;
        }
        if(dir==2)
        {
            for(i=R;i>=L;i--)
            {
                a[B][i]=v[k];
                k++;
            }
            B--;
        }
        if(dir==3)
        {
            for(i=B;i>=T;i--)
            {
                a[i][L]=v[k];
                k++;
            }
            L++;
        }
        dir=(dir+1)%4;

    }

return a;
}
void main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);      
    int**ARR=generateMatrix(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",ARR[i][j]);
        }
        printf("\n");
    }
    
}