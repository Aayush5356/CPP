#include<iostream>
using namespace std;

class aayush
{
	int a1=98;
	friend void lawer();	
};

class mann
{
	int m1=95;
	friend void lawer();
};

void lawer()
{
	aayush a2;
	mann m2;
	cout << "Aayush No : " <<a2.a1 << endl;
	cout << "Mann No : " << m2.m1 << endl;
}

main()
{
	lawer();
}
