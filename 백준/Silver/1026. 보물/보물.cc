#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
//1026보물
int n;
int a[51];
int b[51];
int ind[51];
int answer[51];
priority_queue<int> pq;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        pq.push(b[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (pq.top() == b[j] && (!ind[j])) {
                cnt++;
                ind[j] = cnt;
                pq.pop();
                break;
            }
        }
    }

    sort(a, a + n);
    //s계산
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int in = ind[i] - 1;
        ans+= a[in] * b[i];
    }

    cout << ans << "\n";

    return 0;
}