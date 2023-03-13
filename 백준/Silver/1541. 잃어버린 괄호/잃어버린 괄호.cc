//031223
#include <iostream>
#include <string>
using namespace std;
//1541읽어버린괄호
int main() {
    string str;
    cin >> str;
    int n = 0;
    string a="";
    bool minus = false;
    
    for (int i = 0; i <= str.size(); i++) {
        if (str[i] == '-' || str[i] == '+' || i == str.size()) {
            if (minus) { n -= stoi(a);}
            else {n += stoi(a);}
            a = "";
        }
        else { a += str[i];}
        if (str[i] == '-') {minus = true;}
    }
    cout << n << "\n";
    return 0;
}
