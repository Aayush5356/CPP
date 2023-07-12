#include<iostream>
using namespace std;

class hotel
{
	private :
		int hotel_id;
		string hotel_name;
		string hotel_type;
		int hotel_staff_size;
		int hotel_room_size;
		int hotel_establish_year;
		int rating_type;
	public :
		void input()
		{
			cout << "Enter Hotel Id :- ";
			cin >> hotel_id;
			cout << "Enter Hotel Name :- ";
			cin >> hotel_name;
			cout << "Enter Hotel Type :- ";
			cin >> hotel_type;
			cout << "Hotel Staff Size :- ";
			cin >> hotel_staff_size;
			cout << "Hotel Room Size :- ";
			cin >> hotel_room_size;
			cout << "Hotel Establish Year :- ";
			cin >> hotel_establish_year;
			cout << "Rate Hotel (1 star, 2 star, 3 star):- ";
			cin >> rating_type;
			cout << endl;
	    }
	    
	    void output()
	    {
	    	cout << "Hotel Id is " << hotel_id << endl;
	    	cout << "Hotel Name is " << hotel_name << endl;
	    	cout << "Hotel Type is " << hotel_type << endl;
	    	cout << "Hotel Staff size is " << hotel_staff_size << endl;
	    	cout << "Hotel Room Size is " << hotel_room_size << endl;
	    	cout << "Hotel was Established in " << hotel_establish_year << endl;
	    	cout << "Hotel's Rating is " << rating_type << endl << endl << endl;
		}
};

int main()
{
	hotel h1[20];
	int n;
	cout << "Enter Limit :- ";
	cin >> n;
	for(int i=0; i<n; i++)
	{
		h1[i].input();
		h1[i].output();
	}
}
