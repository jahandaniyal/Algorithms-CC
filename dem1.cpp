#include<iostream>
#include<string>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
    string st;
    int myNumber = 0;

   // while (true) {
   cout << "Please enter a valid number: ";
   getline(cin, st);

   // This code converts from string to number safely.
   stringstream myStream(st);
   (myStream >> myNumber);
//     break;
  // cout << "Invalid number, please try again" << endl;
 //}
 cout << "You entered: " << myNumber << endl << endl;


return 0;
}
