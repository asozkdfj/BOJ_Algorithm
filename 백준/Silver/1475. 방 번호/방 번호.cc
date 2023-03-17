#include <iostream>
using namespace std;
//1475
int n;
int m[10];

int main(void) {
    cin >> n;
    while (n > 0) {
        int i = n % 10;
        n = n / 10;
        m[i] += 1;
    }
    int six = 0;
    int nine = 0;
    int max = -1;
    for (int i = 0; i < 10; i++) {
        if (i == 6) { six = m[i]; }
        else if (i == 9) { nine = m[i]; }
        else if (max < m[i]) {
            max = m[i];
        }
    }
    if (((six + nine+1) /2 > max)) {max = (six + nine+1) / 2;}
    cout << max;
    return 0;
}