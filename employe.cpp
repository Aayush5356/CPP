#include<iostream>
using namespace std;

class student 
{
	private :
		int employId;
		string employname;
		static string componyName;
		
	public :
		void input()
		{
		cout << "Employe Id :";
		cin >> employId;
		
		cout << "Employe Name :";
		cin >> employname;
	    }
		
		void output()
		{
			cout << "Employe Id :" << employId << endl;
			cout << "Employe Name :" << employname << endl;
		}
		
		static void basic()
		{
			cout << componyName << endl;
		}		
};

string student :: componyName = "Aayush Patel &CO.";

int main()
{
	student e1[20];
	int n;
	cout << "Enter Limit : ";
	cin >> n;
	for(int i=0; i<n; i++)
	{
		e1[i].input();
		e1[i].output();
		e1[i].basic();
	}
	return 0;
}