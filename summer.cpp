#include<iostream>
using namespace std;

int main()
{
    int sum=0;
    int i= 1;

    while(i<1000)
    {
        if(i%3==0 || i%5 ==0)
        {
            sum+=i;
        }
        i++;
    }
    cout<<sum<<endl;
}