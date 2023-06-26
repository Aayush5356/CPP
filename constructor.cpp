#include<iostream>
using namespace std;

class student
{
	public : 
	string name;
	int age;
	
	student(string name,int age)
	
	{
		this -> name = name;
		this -> age =age;
		cout << "Name is :- " << this -> name << endl;
		cout << "Age is :- " << this -> age << endl << endl;
	}
	
	student(student &s1)
	{
		cout << "Name is :- " << s1.name << endl;
		cout << "Age is :- " << s1.age << endl << endl;
	}
};

int main()
{
	student s1("Aayush",17),s2("Mann",17);
	student s3(s1);
	student s4(s2);
	return 0;
}
