#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
   vector<int> userValues(20); 
   int value;
   int i;
   int Size;
   
   
   for (i = 0; i < 20; i++) {
      cin >> value;
      if(value<0){
        break;
      }
      userValues.at(i) = value; 

   }
   cout<<i<<endl;
   userValues.resize(i);
   

   value*=-1;
   if(value == i)
   {
      cout<<value*-1<<endl;
   }
   else{
   cout<<userValues.at(i-value)<<endl;
   }

   return 0;
}