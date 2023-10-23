#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    int numRolls;
    int seed;
    int bet;

   cin>>numRolls>>seed>>bet; 

   srand(seed);
   int counter=0;
   for(int i=0;i<numRolls;i++)
   {
        int roll = rand()%6 +1;

        cout<<"Roll
         "<<i+1<<": "<<roll<<endl;;

        if(roll == bet)
        {
            counter++;
        }
   }
   cout<<"Betted number "<<bet<<" occured  "<<counter<<" number of times"<<endl;

}