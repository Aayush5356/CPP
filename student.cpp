#include<iostream>
using namespace std;

class student
{
	private :
		string name;
		int rn;
		int m;
		int e;
		int s;
	
	public :
	
	 	void getData()
		 {
		 	cout << "Enter Your Name : ";
		 	cin >> name;
		 	
		 	cout << "Enter Your Roll No. :";
		 	cin >> rn;
		 	
		 	cout << "Enter Your Maths Marks :";
		 	cin >> m;
		 	
		 	cout << "Enter Your Englis Marks :";
		 	cin >> e;
		 	
		 	cout << "Enter Your Science Marks :";
		 	cin >> s;
		 }
		 
		 void setData()
		 {
		 	cout << "Name is : "<<name<<endl;
		 	cout << "Roll No. is :"<<rn<<endl;
		 	cout << "Maths Marks is :"<<m<<endl;
		 	cout << "Englis Marks is :"<<s<<endl;
		 	cout << "Science Marks is :"<<s;
		 }	
};

int main()
{
	student a1;
	a1.getData();
	a1.setData();
	return 0;
}
	
