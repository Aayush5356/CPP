#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout << "Before Value:-" << endl << endl;
	
	cout << "Enter A :- ";
	cin >> a ;
	
	cout << "Enter B :- ";
	cin >> b ;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout << "After Value:-" << endl << endl;
	cout << "A is :- " << a << endl;
	cout << "B is :- " << b << endl;
}
