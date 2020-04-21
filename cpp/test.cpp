using namespace std;
#include<iostream>

main()
{
	int x=3, y=5, z=7;
	int a, b;
	
	a=x*2+y/5-z*y;
	b=++x*(y-3)/2-z++*y;

	cout<<"\n a = "<<a;
	cout<<"\n b = "<<b;
	return 0;
}
