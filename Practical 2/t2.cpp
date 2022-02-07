#include <iostream>
using namespace std;
int main() {
	////declare your float variable here.
	float myPi;


	///User Input
	cout<<"Enter a float number:";
	cin>>myPi;

	//declare your pointer here
	float *piPointer = &myPi;

	cout << *piPointer << endl;
	cout << *piPointer+10.3 << endl;

	return 0;
}
