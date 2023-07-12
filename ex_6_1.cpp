#include<iostream>
using namespace std;

class add
{
	protected :
		int num1,num2;
		
	void input()
	{
		cout << "Enter Value 1 :- ";
		cin >> num1;
		cout << "Enter Value 2 :- ";
		cin >> num2;
	}	
};

class calc : public add
{
	public :
		void division()
		{
			input();
			try
			{
				if(num2!=0)
				{
					cout << "Division is " << num1/num2;
				}
				else
				{
					throw num2;
				}
			}
			catch(int)
			{
				cout << "Value can't devide by zero(0)";
			}
			catch(...)
			{
				cout << "Invelid Value !";
			}
		}
};

int main()
{
	calc c1;
	c1.division();
	return 0;
}
