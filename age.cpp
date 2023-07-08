#include <iostream>
using namespace std;

class akp 
{

   private:
    int age;

   public:
    void input() 
	{
        cout << "Age = ";
        cin >> age;
    }
    
    void output()
    {
    	cout << "Your age is " << age;
	}
};

int main() 
{
	akp a1;
	a1.input();
	a1.output();
	
    return 0;
}
