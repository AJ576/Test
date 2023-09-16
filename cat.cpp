#include<iostream>
using namespace std;

int main()
{
    // int num ;
    // int *p = &num;
    // int pp = *p;
    // cout<<p<<endl;
    // cout<<pp <<endl;
    // p = p+10;
    // pp = *p;
    // cout<<p<<endl;
    // cout<<pp <<endl;
    // pp++;
    // cout<<p<<endl;
    // cout<<pp <<endl;
    // pp--;
    // cout<<p<<endl;
    // cout<<pp <<endl;
    int *p = (int*)0x61ff04;
    int pp = *p;
    cout<<p<<" "<<pp<<endl;
    *p = 3323;
    pp = *p;
    cout<<p<< " "<<pp<<endl;
    int n = 0;
    while(cin>>n)
    {
        *p = 1+*p;
        pp = *p;   
        cout<<p<< " "<<pp<<&n<<endl;
    }
   
    


}