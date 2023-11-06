#include <iostream>
#include<string>
#include <vector>
using namespace std;

int main() {

   /* Type your code here. */
   
   string text;
   cin>> text;
   
   int seed;
   cin>>seed;
   srand(seed);
   
   vector<int>keys(text.size());
   
   int checksum=0;
   
   //generate checksum and the keys for encryption
   for(int i=0;i<text.size();i++)
   {
      //simply adding ascii value to the checksum
      checksum+=text.at(i);
      
      //since we are looping and have the same indexes it is efficient to also generate the keys in this loop
      keys.at(i)= rand()%26;
   }
   
   cout<<"CHECKSUM: "<<checksum<<endl;
   
   //print out the keys
   for(int j =0;j<keys.size();j++)
   {
      cout<<keys.at(j)<<"-";
   }
   cout<<endl;
   
   //print the key as letters
   cout<<"KEY:"<<endl;
   for(int k =0;k<keys.size();k++)
   {
      //simply take the value of key add 97 and convert to charecter datatype. keyL stands for keyLetter
      char keyL = keys.at(k)+97;
      cout<<keyL;
   }
   cout<<endl;
   
   //finally encrypt the message
   //although this leads to a loss of the original text message. Since it's not written anywhere to preserve the
   //orignal I will overwrite it.
   for(int l=0;l<text.size();l++)
   {
      text.at(l)-=97;
      text.at(l)+=keys.at(l);
      text.at(l)%=26;
      text.at(l)+=97;
   }
   //print out the exncrypted message
   cout<<"ENCRYPTED: "<<endl;
   cout<<text<<endl;

   return 0;
}