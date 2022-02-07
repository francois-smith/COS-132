#include <iostream>
#include <cstring>
#include <sstream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
  string userColour, nextColour;
  list<string> colours = {"green", "yellow", "orange", "blue", "purple", "red"};

  int userNum, i;

  for (size_t i = 0; i < 3; i++)
  {
    cout << "Input a colour: ";
    cin >> userColour;

    if(find(colours.begin(), colours.end(), userColour) != colours.end())
    {
      if((userColour == "red") || (userColour == "yellow") || (userColour == "blue"))
      {

        cout << "Input a number: ";
        cin >> userNum;

          switch(userNum)
          {
            case 1:
              cout << "yellow,orange,red,purple,blue,green" << endl;
              break;

            case 2:
              cout << userColour << endl;
              break;

            case 3:
              if(userColour == "yellow") nextColour = "red";
              if(userColour == "red") nextColour = "blue";
              if(userColour == "blue") nextColour = "yellow";
              cout << nextColour << endl;
              break;
          }
      }

        else if((userColour == "green") || (userColour == "orange") || (userColour == "purple"))
      {
        cout << "Input a number: ";
        cin >> userNum;


          switch(userNum)
          {
            case 1:
              cout << "green,orange,purple" << endl;
              break;

            case 2:
              cout << userColour << "!" << endl;
              break;

            case 3:
              if(userColour == "green") nextColour = "orange";
              if(userColour == "orange") nextColour = "purple";
              if(userColour == "purple") nextColour = "green";
              cout << nextColour << endl;
              break;
          }
      }// else if

    }
    else
    {
      cout << "Colour not found" << endl;
    }
  }

  return 0;
}
