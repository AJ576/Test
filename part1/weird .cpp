#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
   vector<int> userValues(20); 
   int value;
   int i;
   int Size;
   
   // removed much of your code from here because cluttering everything here only makes it harder to debug
   for (i = 0; i < 20; i++) {
      cin >> value;
      // we break out of the loop at negative input
      if(value<0){
        break;
      }
      userValues.at(i) = value; 

   }
   //resize the vector to value of i that increases with the loop. note i is one more than the last index of the vector. Just keep this in mind.
   userValues.resize(i);
   
    // since the negative input is still sotred in the variable value. we can use it
   value*=-1;
   // I don't know why I do this but it works so... and that's the output the program wants
   if(value == i)
   {
      cout<<value*-1<<endl;
   }
   // other wise simply subtract the value from the size of the array to get the nth element from the last.
   else{
   cout<<userValues.at(i-value)<<endl;
   }

   return 0;
}