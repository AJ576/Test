#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
   string mess;
   int key;

    getline(cin,mess);
    cin>>key;
    key%=26;
    vector<char> out;
   for(int i = 0;i<mess.size();i++)
   {
        if(isalpha(mess.at(i)))
        {
            if(islower(mess.at(i)))
                {
                    char c = mess.at(i);
                    
                    c-=97;
                    
                    c+= key;
                    c%=26;
                    c+=97;
                    
                    out.push_back(c);
                    // cout<<c<<" ";
                    // if(c>122)
                    // {
                    //     c-=26;
                        
                    // }
                    // cout<<c<<endl;
                }
            if(isupper(mess.at(i)))
            {
                char c = mess.at(i);
                    
                    c-=65;
                    
                    c+= key;
                    c%=26;
                    c+=65;
                    
                     out.push_back(c);
            }


        }
        else
        {
            out.push_back(mess.at(i));
        }
           
        
   }
    cout<<"The input is: \n"<<mess<<endl;
    cout<<"The OutPut is: "<<endl;

   for(int i=0;i<out.size();i++)
   {
        cout<<out.at(i);
   }
   cout<<endl;

}