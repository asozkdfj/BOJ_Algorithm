//031223
#include <iostream>
#include <vector>
using namespace std;

int n, m, t;
int main(void) {
    cin >> t;
    int x, y;
    for(int i=0;i<t;i++){
        cin >> n >> m;
        for (int j = 0; j < m; j++) {cin >> x >> y;}
        cout << n - 1 << "\n";
    }
}