#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n,m;
vector<int> arr;
string cmd;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>cmd;
        if(cmd=="push"){
            cin>>m;
            arr.push_back(m);
        }
        else if(cmd=="front"){
            if(arr.size()==0){cout<<"-1"<<"\n";}
            else{cout<<arr[0]<<"\n";}
        }
        else if(cmd=="back"){
            int b=arr.size();
            if(b==0){cout<<"-1"<<"\n";}
            else{
                cout<<arr[b-1]<<"\n";
            }
        }
        else if(cmd=="pop"){
            if(arr.size()==0){cout<<"-1"<<"\n";}
            else{
                cout<<arr[0]<<"\n";
                arr.erase(arr.begin());
            }
        }
        else if(cmd=="size"){
            cout<<arr.size()<<"\n";
        }
        else if(cmd=="empty"){
            if(arr.size()==0){cout<<"1"<<"\n";}
            else{cout<<"0\n";}
        }
        
    }
    return 0;
}