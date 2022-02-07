#include <iostream>
#include <string>
using namespace std;

string userPair, snum;
int i, k, l;

bool has_only_digits(const string s){
  return s.find_first_not_of( "0123456789" ) == string::npos;
}

int main()
{
  for (size_t k = 0; k < 2; k++)
  {
    cout << "Enter a pair: ";
    cin >> userPair;

    snum = userPair;
    snum.erase(0,2);

    if (((userPair[0] == '+') || (userPair[0] == '-') || (userPair[0] == '*')) && (userPair.find(',')) && (has_only_digits(snum)))
    {
      int num = stoi(snum);
      l = num;
      for (size_t i = 0; i < l; i++)
      {
        switch (userPair[0])
        {
          case '+':
          num = num + stoi(snum);
          break;

          case '-':
          num = num - stoi(snum);
          break;

          case '*':
          num = num * stoi(snum);
          break;
        }
      }
      cout << "Result: " << num << endl;
    }
    else
    {
      cout << "Result: 0" << endl;
    }

  }

  return 0;
}
  //
