#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
//11000
using namespace std;
int n;
long long s, t;
vector<pair<long long, long long>> arr;

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s >> t;
        arr.push_back(make_pair(s,t));
    }
    sort(arr.begin(), arr.end());
    priority_queue<long long,vector<long long>,greater<long long>> pq;
    long long end = arr[0].second;
    pq.push(end);
    for (int i = 1; i < n; i++) {
        if (arr[i].first >= pq.top()) {
            pq.pop();
            pq.push(arr[i].second);
        }
        else {
            pq.push(arr[i].second);
        }
    }
    cout << pq.size();
    return 0;
}