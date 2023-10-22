#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    for(int i=1;i<332;i++)
    {
        for (int j = i+1;j<1000-333;j++)
        {
            // for (int k=j+1;k<1000;k++)
            // {
            //     if(((i*i)+(j*j)==k*k)&& i+j+k == 1000)
            //     {
            //         cout<<i<<","<<j<<","<<k<<endl;
            //         cout<<(i*j*k)<<endl;
            //     }
            // }
            int k=1000-(i+j);
            if( i*i+j*j == k*k)
                {
                    cout<<i<<","<<j<<","<<k<<endl;
                    cout<<(i*j*k)<<endl;
                }

        }
    }
}