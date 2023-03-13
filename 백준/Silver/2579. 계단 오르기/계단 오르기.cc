//031223
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//2579계단오르기
int dp[301];
int n, score;
int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    vector<int> arr;
    arr.push_back(0);
    for (int i = 1; i <= n; i++) {
        cin >> score;
        arr.push_back(score);
    }
    int cnt = 0;
    dp[1] = arr[1];
    for (int i = 2; i <= n; i++) {
        dp[i] = max(arr[i - 1] + dp[i - 3] + arr[i], dp[i - 2] + arr[i]);
    }
    cout << dp[n];
    return 0;
}
//계속 풀어봐서 생각해야함. 뭐가 반복하고 뭘 더해야하는지 생각