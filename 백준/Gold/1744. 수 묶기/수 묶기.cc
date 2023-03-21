#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int n, num;
int arr[51];

//1744
int main() {
    priority_queue<int,vector<int>,greater<int>> pq; //오름차순
    priority_queue<int> pq1; //오름차순
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > 0) { pq1.push(arr[i]); }
        else {
            pq.push(arr[i]);
        }
    }
    vector<int> answer;
   while(pq.size()>0) {
       int a = pq.top();
       pq.pop();
       if (pq.size() != 0) {
           int b = pq.top();
           pq.pop();
          
           if (b == 0) {
               answer.push_back(a * b);
           }
           else
               answer.push_back(a * b);
       }
       else { answer.push_back(a); }
    }

   while (pq1.size() > 0) {
       int a = pq1.top();
       pq1.pop();
       if (pq1.size() != 0)
       {
           int b = pq1.top();
           pq1.pop();
           if (b==1) { answer.push_back(a + b); continue; }
           else answer.push_back(a * b);
       }
       else { answer.push_back(a); }
   }

    int ans = 0;
    for (int i = 0; i < answer.size(); i++) {
        ans += answer[i];
    }
    cout << ans;
    return 0;
}