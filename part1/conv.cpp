#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;

int convert(vector <int> num)
{
    int value = 0;
    for(int i = num.size()-1;i>=0;i--)
    {    
        value+= num[i]*(pow(16,num.size()-i-1));
    }
    return value;
}

int main()
{
    string input;
    cout<<"Enter a hexadecimal number : ";
    cin >> input;
    vector <int> num;

    for(int i = 0; i<input.size();i++)
    {
        char ca = input[i];

        switch(ca)
        {
            case 'a':
            case 'A':
                num.push_back(10);
                break;
            case 'b':
            case 'B':
                num.push_back(11);
                break;
            case 'c':
            case 'C':
                num.push_back(12);
                break;
            case 'd':
            case 'D':
                num.push_back(13);
                break;
            case 'e':
            case 'E':
                num.push_back(14);
                break;
            case 'f':
            case 'F':
                num.push_back(15);
                break;
            case '0':
                num.push_back(0);
                break;
            case '1':
                num.push_back(1);
                break;
            case '2':
                num.push_back(2);
                break;
            case '3':
                num.push_back(3);
                break;
            case '4':
                num.push_back(4);
                break;
            case '5':
                num.push_back(5);
                break;
            case '6':
                num.push_back(6);
                break;
            case '7':
                num.push_back(7);
                break;
            case '8':
                num.push_back(8);
                break;
            case '9':
                num.push_back(9);
                break;
        }
        // cout<<"as"<<endl;
        // cout<< num[3];
         

        

    
    }
    int value = convert(num);
    cout<<"The input was:"<< input <<" which is hexadecimal!"<<endl;
    cout<<"The output was :"<<value<<" which is in decimal!"<<endl;
}