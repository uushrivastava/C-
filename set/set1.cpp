#include<iostream>
#include<set>
#include<functional>
#include<iterator>
#include<algorithm>

using namespace std;

main()
{
    set<int,greater<int>> s;   //greater<int> to sort the element in decending order and less<int> to sort element is assending order which is by default
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(50); //50 is stored only one time as set stores only unique elements;
    s.insert(60);
    set <int,greater<int>> :: iterator itr;
    for(itr=s.begin();itr!=s.end();itr++)
    {
        cout<<*itr<<endl;
    }
    cout<<endl<<endl;
    set <int> s2(s.begin(),s.end());
    for(itr=s2.begin();itr!=s2.end();itr++)
    {
        cout<<*itr<<endl;
    }

    cout << "\ns2 after removal of elements less than 30 : "; 
    s2.erase(s2.begin(), s2.find(30)); 
    for (itr = s2.begin(); itr != s2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    cout<<endl<<endl;
    int num;
    num= s2.erase(70);
    cout << "\ns2 after removal of element 50 : "; 
    for (itr = s2.begin(); itr != s2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    cout<<endl<<endl;
    cout<<s2.size()<<endl;
    cout<<s.size()<<endl;
    cout<<s2.max_size()<<endl;
    cout<<s.max_size()<<endl;

}