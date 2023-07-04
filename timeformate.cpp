#include <iostream>
using namespace std;
 
int main()
{

    int time,hour,min,sec;

 
    cout << "Enter a time in seconds: ";
    cin >> time;
 
    hour = time/3600;
    time = time%3600;
    min = time/60;
    time = time%60;
    sec = time;
 

    cout<<"The time is:- "<<hour<< " : "<<min<<" : "<<sec;
 
    return 0;
}
