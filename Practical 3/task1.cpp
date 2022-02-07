#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	float x, answ;

	cout << "Enter a value of x: ";
	cin >> x;

	answ = (cos(pow(x, 2)))/(5+2*cos(x)) + (sin(pow(x, 2)))/(5*M_PI) + (tan(x))/(cos(x)+sin(x));

	cout << setprecision(6) << "The answer is: " << answ << endl;

	return 0;
}
