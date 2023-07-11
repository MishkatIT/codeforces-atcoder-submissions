/*
    author    : MishkatIT
    created   : Tuesday 2023-07-11-17.22.43
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n + 1];
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 1; i <= n; i++) {
            cin >> arr[i];
            pq.push(i);
        }
        if(n == 1) {
            cout << -1 << '\n';
            continue;
        }
        vector<int> ans(n + 1);
        for (int i = 1; i <= n; i++) {
            if (pq.top() == arr[i]) {
                int x = pq.top();
                pq.pop();
                if(!pq.empty()) {
                    ans[i] = pq.top();
                    pq.pop();
                }
                pq.push(x);
            } else {
                ans[i] = pq.top();
                pq.pop();
            }
        }
        if(!pq.empty()) {
            ans[n] = pq.top();
        }
        if(ans[n] == arr[n]) {
            swap(ans[n], ans [n - 1]);
        }
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " \n"[i == n];
        }
    }
    return 0;
}
