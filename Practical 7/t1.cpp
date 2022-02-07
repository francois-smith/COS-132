#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

string data[4][4];
string line;
int r, c, total, average, count;

int main()
{
  ifstream inFile("input.txt");
  r = 0;

  for (int r = 0; r < 4; r++) {
      for (int c = 0; c < 4; c++) {
        data[r][c] = '0';
      }
  }

  if(inFile)
  {
    while(getline(inFile, line))
    {
      stringstream ss(line);
      vector<string> v;
      c = 0;

      while(ss.good())
      {
        string num;
        getline(ss, num, ',');
        v.push_back(num);
        data[r][c] = num;
        c++;
      }
      r++;
    }
    inFile.close();
  }

  for (int r = 0; r <= 3; r++)
  {
    int total = 0;
    int temp = 0;
    for (int c = 0; c <= 3; c++)
    {
      stringstream sk(data[r][c]);
      sk >> temp;
      if(temp != 0)
      {
        total = total + temp;
      }
    }
    cout << "Row Total " << r+1 << ": " <<  total << endl;
  }

  for (int c = 0;  c <= 3; c++)
  {
    int total = 0;

    int temp = 0;
    for (int r = 0; r <= 3; r++)
    {
      stringstream sk(data[r][c]);
      sk >> temp;
      if(temp != 0)
      {
        total = total + temp;
      }
    }
    cout << "Col Total " << c+1 << ": " <<  total << endl;
  }

  count = 0;
  for (int r = 0;  r <= 3; r++)
  {
    int temp = 0;
    for (int c = 0; c <= 3; c++)
    {
      stringstream sk(data[r][c]);
      sk >> temp;
      if(temp != 0)
      {
        total = total + temp;
      }
    }
  }

  average = total/16;

  cout << "Array Average: " << average << endl;

  return 0;
}
