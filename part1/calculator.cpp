#include<iostream>

using namespace std;

int main(){

    int a =0;
    int b = 0;
    char op =' ';

    cin >>a;
    cin>>b;
    cin>>op;

    switch(op){


        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        default:
        cout<<"nope";

    }
    return 0;
}