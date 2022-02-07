#include <iostream>
#include <array>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

string linSearch(double arr[10], double search[8]);

double arr[10], search[8];
string line, ss;
int r, c;


int main()
{
  ifstream inFile("input.txt");
  r = 0;

  if(inFile)
  {
    getline(inFile, line);
    stringstream ss(line);
    vector<string> v;
    c = 0;

    while(ss.good())
    {
      string num;
      getline(ss, num, ',');
      v.push_back(num);
      stringstream sg(num);
      sg >> arr[c];
      c++;
    }
      getline(inFile, line);
      stringstream s2(line);
      c = 0;

    while(s2.good())
    {
      string num;
      getline(s2, num, ',');
      v.push_back(num);
      search[c] = stod(num);
      c++;
    }
  }
  inFile.close();


  string returned = linSearch(arr, search);
  vector<string> v;

  stringstream sk(returned);

  while(sk.good())
  {
    string found;
    getline(sk, found, ',');
    v.push_back(found);
    cout << found << endl;
  }

  return 0;
}

string linSearch(double arr[10], double search[8])
{
  string result = "";
  bool flag;

  for (int i = 0; i < 7; i++)
  {
    flag = false;
    for (int f = 0; f < 10; f++)
    {
      if(arr[f] == search[i])
      {
        result = result + to_string(f) + ",";
        flag = true;
      }
    }
    if(flag != true)
    {
      result = result + "NA" + ",";
    }
  }

  flag = false;
  for (int f = 0; f < 10; f++)
  {
    if(arr[f] == search[7])
    {
      result = result + to_string(f);
      flag = true;
    }
  }
  if(flag != true)
  {
    result = result + "NA";
  }

  return result;
}
