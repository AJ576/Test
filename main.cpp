#include<iostream>
#include "calc.h"

using namespace std;
int main()
{
    int n;
    abss();
    cout<<"Enter 1 for add 2 for subtract 3 for multiply for for divide \n";
    cin>>n;
    cout<<"Enter values: ";
    double a,b;
    cin>>a>>b;
    switch (n)
    {
    case 1:
        cout<<add(a,b);
        break;
    case 2:
        cout<<subtract(a,b);
        break;
    case 3:
        cout<<multi(a,b);
        break;
    case 4:
        cout<<divd(a,b);
        break;
    
    default:
    cout<<"You are hopelss";
        break;
    }

}