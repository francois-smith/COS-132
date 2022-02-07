#include <iostream>
#include <fstream>
using namespace std;

string echo(string);
string echo(string, int);

int i = 0;
string data;

int main()
{
  ifstream inputFile;
  inputFile.open("values.txt");

  if(inputFile)
  {
    while (getline(inputFile, data))
    {
      cout << echo(data) << endl;
      cout << echo(data, i) << endl;
      i++;
    }
  }

  inputFile.close();

  return 0;
}

string echo(string echo)
{
  return echo;
}

string echo(string echo, int num)
{
  if((num % 2) == 0)
  {
    echo = echo + to_string(num);
  }
  else if((num % 2) == 1)
  {
      echo = to_string(num) + echo;
  }

  return echo;
}
