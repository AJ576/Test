#include <iostream>
#include <string>
using namespace std;

int main() {

   char userChar;
   string userString;
   int sumUserChar, textLength, position;

   cin >> userChar;
//    cin.ignore();

   getline(cin, userString);
   cout<<userString;
   sumUserChar = 0;

   position = 0; // to go through eaach index in the string

   textLength = userString.length(); // to see how long the loop should go on for

   while (position < (textLength)) { // we subtract 1 because length starts at 1 and position starts at 0
      if (userChar == userString.at(position)) {
         sumUserChar += 1;
         position += 1;
      }
      else {
         position ++;
      }
   }

   if ((sumUserChar > 1) || (sumUserChar == 0)) {
      cout << sumUserChar << " " << userChar << "'s" << endl;
   }
   else {
      cout << sumUserChar << " " << userChar << endl;
   }

   return 0;
}