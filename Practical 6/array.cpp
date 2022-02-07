#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <string>
using namespace std;

string data, num;

int pos, i = 0, number;
int c;

int main()
{
  string numbers[5][3];
  int bins[5] = {0, 0, 0, 0, 0};

  ifstream inputFile;
  inputFile.open("values.txt");


  if(inputFile)
  {
    while (getline(inputFile, data))
    {
      c = 0;
      for (size_t z = 0; z < 5; z++)
      {
        pos = data.find(',');
        num = data.substr(0, pos);

        number = stoi(num);
        data = data.erase (0, pos + 1);

        bins[c] = bins[c] + stoi(num);
        c++;
      }
    }

    for (size_t i = 0; i < 5; i++) {
      cout << bins[i] << endl;
    }

    inputFile.close();
  }
  return 0;
}
