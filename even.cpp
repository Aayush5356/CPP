#include <iostream>
using namespace std;

int main()
{

	int num1[] = { 1 , 2 , 3 , 4 , 5};

	int n = 5;
	for (int i = 0; i < n; i++) 
	{

		if (num1[i] % 2 == 0) 
		{
			cout <<endl << num1[i];
		}
	}

	return 0;
}

