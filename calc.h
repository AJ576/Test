#ifndef CALC_H
#define CALC_H
//these are guards to prevent multiple processing of the .h files. use for every h file

#include<iostream>

//we declare functions here 
double add(double a, double b);
double subtract(double a, double b);
double multi(double a, double b);
double divd(double a, double b);

//we can also define it here but generally you should not to look more professional or wheter.
 void abss()
 {
    std::cout<<"abs"<<std::endl;
 }
#endif