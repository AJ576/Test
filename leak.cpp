#include<iostream>
#include<vector>
using namespace std;
class a
{
    public:
    int as;
};

int main()
{
    vector<a*> bad ;
    int count = 0;
    while (true)
    {
        a *bads = new a;
        bad.push_back(bads);
        cout<<count<<"**"<<endl;
        count++;
    }
}