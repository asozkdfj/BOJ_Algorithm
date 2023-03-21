#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

//1339
int n;
int alpha[26];
int result = 0;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        int size = str.size();
        int a = 1;
        for (int j = size - 1; j >= 0; j--) {
            alpha[str[j] - 'A'] += a;
            a *= 10;
        }
    }
    sort(alpha, alpha + 26); //오름차순
    int num = 9;

    for (int i = 25; i >= 0; i--) {
        if (alpha[i] == 0)break;
        result += (alpha[i] * num);
        num--;
    }

    cout << result;
    return 0;
    //자리 수를 계수로 보는 방법을 생각했어야했다.
}