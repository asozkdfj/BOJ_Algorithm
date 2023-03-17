#include <iostream>
#include <vector>
using namespace std;
int n, k;
int arr[1001];
int main() {
    cin >> n >> k;
    for (int i = 2; i <= n; i++) {
        arr[i] = i;
    }
    int cnt = 0;
    int p = 2;
    int idx = 2;
    while(1){
        if (idx > n) {
            for (int j = 0; j < 1000; j++) {
                if (arr[j] != 0) {
                    p = j;
                    idx = p;
                    break;
                }
            }
        }
        if (arr[idx] != 0) {
            arr[idx] = 0;
            cnt++;
            if (cnt == k) { break; }
           
        }
        idx = idx + p;
    }
    cout << idx;
    return 0;
}