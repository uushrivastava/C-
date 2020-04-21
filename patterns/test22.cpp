
// C++ code to demonstrate 2D vector 
#include <iostream> 
#include <vector> // for 2D vector 
using namespace std; 

long arrayManipulation(int n, vector<vector<int>> queries) {
vector <int> v(n,0);
long l,r,val;
long max=0;

for(long i=0;i<queries.size();i++)
{
    
    
        //cout<<"i "<<i<<endl;
        //cout<<"j "<<j<<endl;
        l=queries[i][0]-1;
        //cout<<"l "<<l<<endl;
        r=queries[i][1]-1;
        //cout<<"r "<<r<<endl;
        val=queries[i][2];
        //cout<<"val "<<val<<endl;
        for(long k=l;k<=r;k++)
        {
            v[k]=v[k]+val;
        }    
    
    
    
} 
for(long i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
    //if(v[i]>max)
    //{
     //   max=v[i];
    //}
}
return max;
}
  
int main() 
{ 
    // Initializing 2D vector "vect" with 
    // values 
    vector<vector<int> > vect{ { 1, 2, 100 }, 
                               { 2, 5, 100}, 
                               { 3, 4, 100 } }; 
  
    // Displaying the 2D vector 
    /*for (int i = 0; i < vect.size(); i++) { 
        for (int j = 0; j < vect[i].size(); j++) 
            cout << vect[i][j] << " "; 
        cout << endl; 
    } */
    cout<<arrayManipulation(5,vect);
  
    return 0; 
} 
