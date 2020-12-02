#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
  ifstream inputObject1("input.txt");
  ifstream inputObject2;
  ifstream inputObject3;

  stringstream converter;

  string input1;
  string input2;
  string input3;

  int og=0;
  int belt=0;
  int line=0;
  int value=0;

  while(inputObject1 >> input1)
  {
    og=stoi(input1);
    inputObject2.open("input.txt");
    while(inputObject2 >> input2)
    {
      inputObject3.open("input.txt");
      belt=stoi(input2);
      while(inputObject3 >> input3)
      {
        line=stoi(input3);
        if(og+belt+line == 2020)
        {
          value=og*belt*line;
        }
      }
      inputObject3.close();
    }
    inputObject2.close();
  }
  cout << value << endl;
  return 0;
}