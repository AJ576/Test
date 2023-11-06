#include<iostream>
#include<string>
using namespace std;
int main()
{
    int dim;
    string exclude;

    cin>> dim;
    cin>>exclude;

    char w = exclude.at(0);
    int exl = 0;
    bool isRow =true;
    switch(w)
    {
        case 'n': 
        exl =0;
        isRow = true;
        break;

        case 's': 
        exl =dim-1;
        isRow = true;
        break;

        case 'w': 
        exl =0;
        isRow = false;
        break;

        case 'e': 
        exl =dim-1;
        isRow = false;
        break;
    }

    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            if( isRow && (i == exl)){cout<<"A "; continue;}
            if( !isRow && (j == exl)){cout<<"A "; continue;}
            
            cout<<"B ";
        }
        cout<<endl;
    }

}