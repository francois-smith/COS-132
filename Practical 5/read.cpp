#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int prevNum, curNum;
string data;


int main()
{
  ifstream inputFile;
  inputFile.open("lines.txt");

//First File-------------------------------------------------------------------
  prevNum = 0;
  if(inputFile)
  {
    while (getline(inputFile, data))
    {
      size_t found = data.find("stop");
      if(found != string::npos)
      {
        cout << "File reading stopped" << endl;
        break;
      }
      else
      {
        istringstream(data)>> curNum;
        cout << curNum + prevNum << endl;
        prevNum = curNum;
      }
    }
    inputFile.close();
  }

//Second File------------------------------------------------------------------
  inputFile.open("lines2.txt");

  prevNum = 0;
  if(inputFile)
  {
    while (getline(inputFile, data))
    {
      size_t found = data.find("stop");
      if(found != string::npos)
      {
        cout << "File reading stopped" << endl;
        break;
      }
      else
      {
        istringstream(data)>> curNum;
        cout << curNum + prevNum << endl;
        prevNum = curNum;
      }
    }
    inputFile.close();
  }
  return 0;
}
