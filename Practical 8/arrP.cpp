#include <iostream>
#include <iomanip>
#include <array>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

string output, line = "", num = "";
char arrSize[5];
int c = 0, loop = 0, largest = 0;

int main()
{
  ifstream inFile("values.txt");

  if(inFile)
  {
    while(getline(inFile, line))
    {
      c = 0;
      loop = 0;

      int pos = line.find(";");
      line.copy(arrSize, pos, 0);
      line.erase(0, pos+1);
      loop = atoi(arrSize);
      int *nums = new int[loop];

      for (int i = 0; i < loop; i++)
      {
          nums[i] = 0;
      }

      for (int i = 0; i < 5; i++)
      {
          arrSize[i] = 0;
      }


      stringstream ss(line);
      vector<string> v;

      while(ss.good())
      {
        string num;
        getline(ss, num, ',');
        stringstream sv(num);
        v.push_back(num);
        sv >> nums[c];
        c++;
      }

      for (int i = 0; i < loop; i++)
      {
          if(nums[i] > largest)
          {
            largest = nums[i];
          }
      }

      if(largest%2 == 0)
      {
        for(int i = 0; i < loop; i++)
        {
          nums[i] = nums[i]*largest;
        }
      }
      else
      {
        for(int i = 0; i < loop; i++)
        {
          nums[i] = nums[i]*nums[i];
        }
      }

      output = "";

      for(int i = 0; i < loop-1; i++)
      {
        output = output + to_string(nums[i]) + ",";
      }

      output = output + to_string(nums[loop-1]);

      cout << output << endl;
    }
  }

  return 0;
}
