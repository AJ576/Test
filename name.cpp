#include <iostream>
#include<string>
using namespace std;

int main() {
   const int ROCK = 0;
   const int PAPER = 1;
   const int SCISSORS = 2;
   
   int count1=0;
   int count2 =0;

   int seed;
   cin >> seed;
   srand(seed);

   /* Type your code here. */
   string word;
  
   getline(cin,word);

   word = word.substr(word.find(" ")+1,word.length());
   
   string name1 = word.substr(0,word.find(" "));
   word = word.substr(word.find(" ")+1,word.length());
   string name2 = word.substr(0,word.find(" "));
   word = word.substr(word.find(" "),word.length());
   
   string NuM;
   int num ;
  for(int i =0;i<word.length();i++)
  {
      if(isdigit(word[i]) )
      {
         
         if(isspace(word[i-1] ))
         {
           
            word= word.substr(i,word.length());
            
            NuM = word.substr(0,word.find(" "));
            
            num = stoi(NuM);
            
            break;
         }
         cout<<"Rounds must be > 0"<<endl;
      }
  }
   
   cout<<name1<<" vs "<<name2<<" for "<<num<<" rounds"<<endl;
   
   for(int i =0;i<num;i++)
   {
      int num1 = rand()%3;
      int num2 = rand()%3;
       while(num1==num2)
       {
          num1 = rand()%3;
          num2 = rand()%3;
          cout<<"Tie"<<endl;
       }
      if(num1==ROCK && num2==PAPER)
      {
         cout<<name2<<" wins with paper"<<endl;
         count2++;
      }
      if(num1==PAPER && num2==ROCK)
      {
         cout<<name1<<" wins with paper"<<endl;
         count1++;
      }
      if(num1==SCISSORS && num2==PAPER)
      {
         cout<<name1<<" wins with scissors"<<endl;
         count1++;
      }
      if(num1==PAPER && num2==SCISSORS)
      {
         cout<<name2<<" wins with scissors"<<endl;
         count2++;
      }
      if(num1==ROCK && num2==SCISSORS)
      {
         cout<<name1<<" wins with rock"<<endl;
         count1++;
      }
      if(num1==SCISSORS && num2==ROCK)
      {
         cout<<name2<<" wins with rock"<<endl;
         count2++;
      }
   }
   cout<<name1<<" wins "<<count1<<" and "<<name2<<" wins "<<count2<<endl;
   
   return 0;

}
