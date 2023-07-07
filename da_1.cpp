#include<iostream>
using namespace std;

class User
{
    protected :
        int num1,num2;    
       
        void setData()
        {
            cout << "Enter Value 1 : ";
            cin >> num1 ; 
			cout << "Enter Value 2 : ";
			cin >> num2 ;   
			cout << endl;
        }    
};

class Calc : public User
{
    public :
    void division()
    {
        setData();
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
        catch(int x)
        {
            cout << "Value can't divide by zero(0) !";
        }
        catch(...)
        {
            cout << "Invalid value";
        }
       
    }
};

int main()
{
    Calc c1;
    c1.division();
    return 0;
}
