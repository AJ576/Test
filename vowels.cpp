#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int a=0;
    int e=0;
    int i=0;
    int o=0;
    int u=0;
    int words=0;
    vector <int>pos;
    string word = "It was an established Athenian practice by the late BC 5th century to hold a public funeral in honour of all those who had died in war.[3] The remains of the dead[4] were left in a tent for three days so that offerings could be made. Then a funeral procession was held, with ten cypress coffins carrying the remains, one for each of the Athenian tribes, and another left symbolically empty for the missing or those whose remains were unable to be recovered. Finally they were buried at a public grave (at Kerameikos). The last part of the ceremony was a speech delivered by a prominent Athenian citizen chosen by the state.";
    
    for(int i=0;i<word.size();i++)
    {
        if(!islower(word.at(i)))
        {
             word.at(i) +=32;
        }
        if(isalpha(word.at(i)))
        {
            words++;
        }
        
        switch (word.at(i))
        {
            case 'a':
        
                a++;
                word.at(i) = '@';
                break;
                
            case 'e':
        
                e++;
                word.at(i) = '@';
                break;

            case 'i':
        
                i++;
                word.at(i) = '@';
                break;
            case 'o':
        
                o++;
                word.at(i) = '@';
                break;
            case 'u':
        
                u++;
                word.at(i) = '@';
                break;
            
        }
       
    }

    cout<<"a "<<a<<" e "<<e<<" i "<<i<<" o "<<o<<" u "<<u<<endl;
    cout<< "word count: "<<words<<endl;
    cout<<word<<endl;



}