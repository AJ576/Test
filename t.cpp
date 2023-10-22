#include<iostream>

using namespace std;


int main()
{
    int first;
    int second; 
    int third; 
    int min;

   cin>> first; 
   cin >> second; 
   cin >> third; 



    if( (first < second) && (first<third) ) {
    
      min = first;
      first = first - min ; 
      second = second - min; 
      third = third - min; 
   }

   else if( ( second < first) && (second < third) ) {
      min = second;
      first = first - min ; 
      second = second - min; 
      third = third - min; 
   }

   else if ( (third < first) && (third < second) ) {
      min = third;
      first = first - min ; 
      second = second - min; 
      third = third - min; 
   }

   else if(((first == second)||  (first == third)) && ( (first<second)  ||(first < third))) {
       min = first;
      first = first - min ; 
      second = second - min; 
      third = third - min; 
    }

   else if(((second == first)  ||(second == third) ) && ( (second<first)||  (second < third)  )) {
      min = second;
      first = first - min ; 
      second = second - min; 
      third = third - min; 
      }

   else if(((third == first)  ||(third == second) ) && ( (third<first)|| (third < second)  )) {
      min = third;
      first = first - min ; 
      second = second - min; 
      third = third - min; 
   }

   else {
      first = first - first; 
      second = second - second; 
      third = third - third; 
   }


   cout << first << " " << second << " " << third << endl; 

   

}