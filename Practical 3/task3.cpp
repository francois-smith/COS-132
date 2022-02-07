#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int stdnum;

	srand(14);

	cout << "Enter your student number: ";
	cin >> stdnum;

	if(stdnum % 2 == 0)
	{
		cout << rand() % 90 + 10 << " is ready to take on COS 132!" << endl;
	}
	else if(stdnum % 2 == 1)
	{
		cout << stdnum << " is really excited for COS 132!" << endl;
	}

	cout << "Enter your student number: ";
	cin >> stdnum;

	if(stdnum % 2 == 0)
	{
		cout << rand() % 90 + 10 << " is ready to take on COS 132!" << endl;
	}
	else if(stdnum % 2 == 1)
	{
		cout << stdnum << " is really excited for COS 132!" << endl;
	}

	return 0;
}
