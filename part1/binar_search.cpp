#include<iostream>
#include<vector>

using namespace std;

int binary(vector<int>v,int target){
    cout<<1;
    if(v.size()>0){
        int index = v.size()/2;
        if(v[index] == target){
            cout<<23;
            return index;
            
        }
        else if(v[index]> target){
            vector<int>vv(index);
            for(int i=0;i<index;i++){
                vv[i]=v[i];
            }
             cout<<24;
            return binary(vv,target);
           
        }
        else if(v[index]<target){
            vector<int>vv(v.size()-index);
            for(int i=index+1;i<v.size();i++){
                vv[i]=v[i];
            }
            cout<<25;
            return binary(vv,target);
            
        }
        else {return -1;}
        cout<<26;
    }
    else{return -2;}
    cout<<27;

}

int main()
{
    int len;
    cin>> len; 
    vector<int> v(len); 

    for(int i=0;i<=len;i++){
        v[i]=i;
      
    }
    cout<<"{";
    for(int i =0;i<len;i++){
        cout<<v[i]<<",";
        
    }
    cout<<"} \n";
    int t=0;
    cin>>t;
    int n =binary(v,t);
    cout<<t;

}