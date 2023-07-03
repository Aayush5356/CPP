#include<iostream>
using namespace std;

class A
{
	public:
		void aayush()
		{
			cout << "Aayush Patel !" << endl;
		}
		void aayush(int x,int y)
		{
			cout << "Override Methode  " << x+y << endl;
		}
		void aayush(int z)
		{
			cout << "Mann Patel ! " << z << endl;
		}
};

class B
{
	public:
		void aayush()
		{
			cout << "Ved Patel !" << endl;
		}
};

main()
{
	A a1;
	a1.aayush();
	a1.aayush(10,20);
	a1.aayush(100);
	
	B b1;
	b1.aayush();
	
	return 0;
}

