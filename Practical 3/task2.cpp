#include<iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string name;

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Howdy: " << setw(7) << setfill('*') << name << endl;

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Howdy: " << setw(7) << setfill('*') << name << endl;

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Howdy: " << setw(7) << setfill('*') << name << endl;

	return 0;
}
