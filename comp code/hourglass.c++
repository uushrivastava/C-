#include<iostream>
using namespace std;
const int r=5;
const int c=5;
int hourglass(int arr[r][c])
{



    int max=INT_MIN;
    if (r<3||c<3)
    {
        return (-1);
    }
    else
    {
        for(int i=0;i<r-2;i++)
        {
            for(int j=0;j<c-2;j++)
            {
                int sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                if(sum>max)
                {
                    max=sum;
                }
            }
        }
    
    }
return max;
}
main()
{
    int i,j;
    int arr[r][c];
    cout<<"enter a 5X5 matrix";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int max_sum=hourglass(arr);
    cout<<"the maximum sum in the matrix is "<<max_sum;
}