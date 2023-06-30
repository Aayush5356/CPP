#include <iostream>
using namespace std;
int main()
{
    int a, b, ch;
    cout << "Enter 1 Number:- ";
    cin >> a;
    
    cout << "Enter 2 Number:- ";
    cin >> b;
    
    cout << endl;
    cout << "Enter your choice:- " << endl << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> ch;
    
    switch (ch)
    {
    case 1:
        cout << "Sum = " << a + b << endl;
        break;
    case 2:
        cout << "Difference = " << a - b << endl;
        break;
    case 3:
        cout << "Product = " << a * b << endl;
        break;
    case 4:
        cout << "Quotient = " << a / b << endl;
        break;
    default:
        cout << "Invalid choice";
        break;
    }
    return 0;
}

