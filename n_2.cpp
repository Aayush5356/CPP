#include <iostream>
using namespace std;

int sum(int n)
 
{
   if(n == 0)
   return n;
   else
   return n + sum(n-1);
}
int main() 
{
	int a;
  	cout << "Enter a Value :- ";
  	cin >> a;  
  	cout<<"Sum of n number is "<<sum(a);
  	return 0;
}
