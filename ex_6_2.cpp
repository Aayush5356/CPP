#include<iostream>
using namespace std;

class User
{
    protected :
        int age;    
       
        void setData()
        {
            cout << "Enter your Age :- ";
            cin >> age ;   
			cout << endl;
        }    
};

class vote : public User
{
    public :
    void division()
    {
        setData();
        try
        {
            if(age>18)
            {
                cout << "You are able to Vote" ;
            }
            else
            {
                throw age;
            }
        }
        catch(int x)
        {
            cout << "You are not eligible for Vote !";
        }

    }
};

int main()
{
    vote v1;
    v1.division();
    return 0;
}
