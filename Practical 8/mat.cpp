#include <iostream>
#include <iomanip>
#include <array>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int t=0, rows = 0, cols = 0, r=0, c=0;
string line="";
int **nums;
int odds=0, evens=0, largest=-100, smallest=100;

int main()
{
  ifstream inFile("values.txt");

  if(inFile)
  {
    t=0;
    r=0;
    c=0;

    while(getline(inFile, line))
    {
      c=0;
      if(t == 0)
      {
        stringstream sd(line);
        vector<string> v;

        string num;
        getline(sd, num, ',');
        stringstream sv(num);
        v.push_back(num);
        sv >> rows;

        getline(sd, num, ',');
        stringstream sc(num);
        sc >> cols;

        t=10;

        nums = new int*[rows];

        for(int p = 0; p < rows; ++p){
          nums[p] = new int[cols];
        }
        continue;
      }
      else
      {
        stringstream ss(line);
        vector<string> v;

        while(ss.good())
        {
          string num;
          getline(ss, num, ',');
          stringstream sk(num);
          v.push_back(num);
          sk >> nums[r][c];
          c++;
        }
        r++;
      }
    }
    for (size_t i = 0; i < rows; i++) {
      for (size_t l = 0; l < cols; l++) {
        if(nums[i][l]%2 == 1)
        {
          odds++;
        }
        else
        {
          evens++;
        }

        if(nums[i][l] > largest)
        {
          largest = nums[i][l];
        }

        if(nums[i][l] < smallest)
        {
          smallest = nums[i][l];
        }
      }
    }
    cout << "Count Odd: " << odds << endl;
    cout << "Count Even: " << evens << endl;
    cout << "Largest Number: " << largest << endl;
    cout << "Smallest Number: " << smallest << endl;
  }

  return 0;
}
