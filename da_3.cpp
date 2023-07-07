#include<iostream>
using namespace std;

int main()
{
	char pass[7];
	int check = 0;
	
	cout << "Enter a Password :-";
	cin >> pass;
	
	for(int i=0; i<=7; i++)
	{
		if(pass[i] >=65 && pass[i] <=90)
		{
			check = 1;
		}
	}
	
	if(check==1)
	{
		cout << "Your password is verified !";
	}
	else
	{
		cout << "Enter any uppercase letter in your password !";
	}
	return 0;
}
