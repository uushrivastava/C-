#include<bits/stdc++.h>
#include<iostream>
#include<set>
using namespace std;
main()
{
    unordered_set <int> s1;
    unordered_multiset <int> s2;

    s1.insert(10);
    s1.insert(40);
    s1.insert(20);
    s1.insert(20);
    s1.insert(67);
    s1.insert(34);
    s2.insert(10);
    s2.insert(10);
    s2.insert(44);
    s2.insert(67);
    s2.insert(23);
    s2.insert(11);

    unordered_set <int> :: iterator it1,itt1;
    unordered_multiset <int> :: iterator it2,itt2;

    for(it1=s1.begin();it1!=s1.end();it1++)
    {
        cout<<*it1<<"\t";
    }
    cout<<endl;
    for(it2=s2.begin();it2!=s2.end();it2++)
    {
        cout<<*it2<<"\t";
    }
    cout<<endl;

    itt1=s1.find(34);
    s1.erase(itt1);

    itt2=s2.find(10);
    s2.erase(itt2);

    cout<<"after deleting the element\n";
    for(it1=s1.begin();it1!=s1.end();it1++)
    {
        cout<<*it1<<"\t";
    }
    cout<<endl;
    for(it2=s2.begin();it2!=s2.end();it2++)
    {
        cout<<*it2<<"\t";
    }
    cout<<endl;

}