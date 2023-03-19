#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[100000];

int n,m,num;
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>num;
        cout<<binary_search(arr,arr+n,num)<<"\n";
    }
    
    return 0;
}