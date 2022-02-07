#include <iostream>
#include <iomanip>
#include <array>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

string bubSort(double arr[8]);

double arr[8];
string line, ss;
int c;

int main()
{
  ifstream inFile("input.txt");

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
        stringstream sv(num);
        v.push_back(num);
        sv >> arr[c];
        c++;
      }
      bubSort(arr);
    }
  }

  return 0;
}

string bubSort(double arr[8])
{
  string sorted = "";
  double hold;

  for(int i=0; i<7; i++)
  {
    for(int j=0; j<7; j++)
    {
      if(arr[j]>arr[j+1])
      {
        hold=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=hold;
      }
    }
  }

  for (int k = 0; k < 7; k++)
  {
    cout << setprecision(3) << arr[k] << ',';
  }
  cout << setprecision(3) << arr[7] << endl;

  return sorted;
}
