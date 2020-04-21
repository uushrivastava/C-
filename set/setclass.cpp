#include<bits/stdc++.h>
using namespace std;

class person{
    public:
    int age;
    string name;
    int pid;

    bool operator < (const person& rhs) const{return age<rhs.age;}
    bool operator > (const person& rhs) const{return age>rhs.age;}

};
main()
{
    set <person,less<person>> set = {{25,"Rupesh",1},{30,"Hitest",2},{22,"jhon",3}};
    //set <person,less<person>> :: iterator itr;
    for(const auto& e:set)
    {
        cout<<e.age<<" "<<e.name<<" "<<e.pid<<endl;
    }
    //for(itr=set.begin();itr!=end();itr++)
    //{
    //   cout<<*itr.age<<" "<<*itr.name<<" "<<*itr.pid<<endl;
    //}
}