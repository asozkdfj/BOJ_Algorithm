#include <iostream>
using namespace std;
int map[101][101];

int main(){
    int n,x,y;
    int cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        for(int a=x;a<x+10;a++){
            for(int b=y;b<y+10;b++){
                if(map[a][b]!=1){
                    map[a][b]=1;
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}