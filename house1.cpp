#include <iostream>
using namespace std;

class house 
{
private :
    int add;
    string area;
    int rooms;
    
public :
    void input()
	{
        cout << "Address: ";
        cin >> add;
        cout << "Area: ";
        cin >> area;
        cout << "Rooms: ";
        cin >> rooms;
        cout << endl;
    }
    void output()
	{
        cout << "House details:" << endl << endl;
        cout << "Address: " << add << endl;
        cout << "Area: " << area << endl;
        cout << "Rooms: " << rooms << endl << endl;
    }
};
int main() 
{
	house h1[20];
	int n;
	cout << "Enter Limit:- ";
	cin >> n;
	for(int i=0; i<n; i++)
	{
		h1[i].input();
		h1[i].output();
	}
    return 0;
}
