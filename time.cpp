#include<iostream>
using namespace std;

int main()
{
	int hour1,min1,sec1;
	int hour2,min2,sec2;
	int hour,min,sec;

	
		cout << "Enter Hour :- ";
		cin >> hour1;
		cout << "Enter Minute :- ";
		cin >> min1;
		cout << "Enter Second :- ";
		cin >> sec1;
		
		cout << endl;
		
		cout << "Enter Hour :- ";
		cin >> hour2;
		cout << "Enter Minute :- ";
		cin >> min2;
		cout << "Enter Second :- ";
		cin >> sec2;
		
		cout << endl;
		
		hour = hour1 + hour2;
		min = min1 + min2;
		sec = sec1 + sec2;
		
		sec = sec1 + sec2;
		min = min1 + min2 +(sec/60);
		hour = hour1 + hour2 +(min/60);
		min = min%60;
		
		cout << endl << "Hour : " << hour << " | Minute : " << min << " | Second : " << sec <<endl;
}
