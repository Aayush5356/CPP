#include<iostream>
using namespace std;

int main()
{
	int hour, min, sec;
	
	cout << "Enter Hour :- ";
	cin >> hour;
	cout << "Enter Minute :- ";
	cin >> min;
	cout << "Enter Second :- ";
	cin >> sec;
	cout << endl;
	
	hour = hour +(min/60);
	min = min%60 + (sec/60);
	sec = sec%60;
	
	cout<<"The time is:- "<<hour<< " : "<<min<<" : "<<sec;
	
	return 0;
}
