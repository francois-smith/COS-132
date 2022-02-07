#include <iostream>
using namespace std;

int main()
{
  int numOfLoops, oddNumbers, i;

  cout << "Enter an int: ";
  cin >> numOfLoops;

  oddNumbers =  0;

  for (size_t i = 0; i < numOfLoops + 1; i++)
  {
    if(i%2 == 1)
    {
      oddNumbers++;
    }
  }

  cout << "Number of Odds: " << oddNumbers << endl;

  return 0;
}
