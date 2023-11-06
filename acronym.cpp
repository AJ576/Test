#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string CreateAcronym(string userPhrase) {

   bool firstLetter;
   int i;
   int j;
   string acronym=""; //will store the uppercase letters with a . at the end
   // acronym+=userPhrase.at(0);
   // acronym+=".";
   //lets make a for loop for the words in the phrase
   // for (j = 0; j < userPhrase.size(); ++j) {
   //    if ((j == 0) || ((j < userPhrase.size()-1) && (!isalpha(userPhrase.at(j))) && (isalpha(userPhrase.at(j+1))))) {
   //       firstLetter = true;
   //    }
   //    else if ((j < userPhrase.size() - 1) && (isalpha(userPhrase.at(j))) && (isalpha(userPhrase.at(j+1)))) {
   //       firstLetter = false;
   // }
   // }

   for (i = 0; i < userPhrase.size(); ++i) { // want to loop through all of the characters in userPhrase
      if(i==0 && isupper(userPhrase.at(i)))
      {
         acronym += userPhrase.at(i);
         acronym += ".";
         continue;
      }
      if ((isupper(userPhrase.at(i)))&&(isspace(userPhrase.at(i-1)))) { //checks if a letter is uppercase at index i
         acronym += userPhrase.at(i);
         acronym += ".";
      }
   }

   return acronym;
}


int main() {

   string userString;
   getline(cin, userString);

   string userAcronym = CreateAcronym(userString);

   cout << userAcronym << endl;

   return 0;
}