using namespace std;
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	int i=5, x;
	float f=6.123456;
	char c='a';
	string str="HELLO WORLD !";
	
	cout<<"enter x: ";	
	cin>>x;
	/*cout<<"enter string : ";
	  cin.getline(str); */
	cout<<"\n";
	cout.width(5);cout<<x;
	cout<<"\n";
	cout.precision(3);cout<<f;
	cout<<"\n";
	cout.put(c);
	cout<<"\n";
	cout<<str;


}

